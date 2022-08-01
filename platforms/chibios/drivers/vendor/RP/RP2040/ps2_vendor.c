// Copyright 2022 Marek Kraus (@gamelaster)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ps2.h"
#include "print.h"
#include "hello.pio.h"

#if !defined(MCU_RP)
#    error PIO Driver is only available for Raspberry Pi 2040 MCUs!
#endif

#if !defined(PS2_MOUSE_USE_REMOTE_MODE)
#    error RP2040 PS2 PIO Driver supports only REMOTE_MODE!
#endif

// TODO: The clock pin must be followed by data pin

#if defined(PS2_PIO_USE_PIO1)
static const PIO pio = pio1;
#else
static const PIO pio = pio0;
#endif

uint8_t ps2_error = PS2_ERR_NONE;

void ps2_host_init(void) {
    uint offset = pio_add_program(pio, &hello_program);
    uint sm = pio_claim_unused_sm(pio, true);
    hello_program_init(pio, sm, offset, 16);
}


uint8_t ps2_host_send(uint8_t data) {
    return 0;
}



uint8_t ps2_host_recv_response(void) {
    return 0;
}

uint8_t ps2_host_recv(void) {
    return 0;
}
