// Copyright 2024 Marek Kraus (@gamelaster)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "chibios_config.h"
#include "i2c_master.h"
#include "led.h"
#include "matrix.h"
#include "hal_pwm.h"
#include "debug.h"

struct {
    bool caps_lock_led;
    bool mute_led;
    bool microphone_mute_led;
} extender_leds_state;

void set_extender_leds(void)
{
    uint8_t addr  = (0x38 << 1) | 0;
    uint8_t config[2];

    config[0] = 0x03;
    config[1] = 0x00;
    printf("Setting!!!\n");
    i2c_status_t ret = i2c_transmit(addr, config, 2, 1000);
    if (ret != I2C_STATUS_SUCCESS) {
        printf("i2c error %d\n", ret);
        // return false;
    }

    config[0] = 0x01;
    config[1] = 0;
    config[1] |= (!extender_leds_state.caps_lock_led) << 0;
    config[1] |= (!extender_leds_state.mute_led) << 1;
    config[1] |= (!extender_leds_state.microphone_mute_led) << 2;
    ret = i2c_transmit(addr, config, 2, 1000);
    if (ret != I2C_STATUS_SUCCESS) {
        printf("i2c error2 %d\n", ret);
        // return false;
    }

}

static PWMConfig pwmCFG = {
    .frequency = BACKLIGHT_PWM_COUNTER_FREQUENCY, /* PWM clock frequency  */
    .period    = BACKLIGHT_PWM_PERIOD,            /* PWM period in counter ticks. e.g. clock frequency is 10KHz, period is 256 ticks then t_period is 25.6ms */
};

#define SLAVE_TO_ADDR(n) (n << 1)
void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
    //   debug_mouse=true;
    i2c_init();
    set_extender_leds();

    pwmCFG.channels[RP2040_PWM_CHANNEL_A - 1].mode = PWM_OUTPUT_ACTIVE_HIGH;
    palSetPadMode(PAL_PORT(GP0), PAL_PAD(GP0), PAL_MODE_ALTERNATE(BACKLIGHT_PAL_MODE));
    pwmStart(&PWMD0, &pwmCFG);

    pwmEnableChannel(&PWMD0, RP2040_PWM_CHANNEL_A - 1, 1000);

}

const matrix_row_t matrix_mask[] = {
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b1111111111111111,
    0b0000000000000001,
};

void led_update_ports(led_t led_state) {
    extender_leds_state.caps_lock_led = led_state.caps_lock;
    set_extender_leds();
}
