#include "ffc/types.h"

extern uint8_t data_ov001_0218fb60[];
extern uint8_t data_ov001_0218fb64[];
extern uint8_t data_ov001_0218fb78[];
extern uint8_t data_ov001_0218fbbc[];
extern uint8_t data_ov001_0218fbc8[];

void *func_ov001_021735f0(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x164);
    if (q == 0) {
        return data_ov001_0218fb60;
    }
    if (*(uint32_t *)(q + 0x14) != 0) {
        return data_ov001_0218fb64;
    }
    if (*(uint32_t *)(q + 0xc) != 0) {
        return data_ov001_0218fb78;
    }
    if (*(uint32_t *)(q + 0x10) != 0) {
        return data_ov001_0218fbbc;
    }
    return data_ov001_0218fbc8;
}
