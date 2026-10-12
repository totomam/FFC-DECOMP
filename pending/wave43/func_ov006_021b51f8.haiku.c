#include "ffc/types.h"

extern uint8_t *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3ed4(uint32_t a, uint8_t *b, uint32_t c);
extern uint32_t func_ov006_021b5048(void);
extern void func_ov006_021b50c8(uint32_t v, uint8_t *p);
extern void func_ov006_021b50bc(uint32_t v, uint8_t *p);
extern uint8_t *data_ov006_021bc84c;

void func_ov006_021b51f8(void) {
    uint32_t half;
    int i;
    uint8_t *b;

    data_ov006_021bc84c = func_ov006_021b49e4(0x340, 4);
    half = 0x340 >> 1;
    for (i = 0; i < 2; i++) {
        b = data_ov006_021bc84c + i * half;
        *(uint32_t *)(b + 0x19c) = func_ov006_021b3ed4(0x20, b, 0xc);
        *(uint32_t *)(b + 0x198) = func_ov006_021b5048();
        *(uint16_t *)(b + 0x188) = 0x300;
        *(uint16_t *)(b + 0x194) = 0x400;
        func_ov006_021b50c8(*(uint32_t *)(b + 0x198), b + 0x180);
        func_ov006_021b50bc(*(uint32_t *)(b + 0x198), b + 0x18c);
    }
}
