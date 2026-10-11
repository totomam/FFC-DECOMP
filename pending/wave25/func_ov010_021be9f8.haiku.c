#include "ffc/types.h"

extern void func_ov010_021bd420(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint8_t data_ov010_021d1850[];

uint8_t *func_ov010_021be9f8(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t *q;

    func_ov010_021bd420(p, a, b, c, 0);
    *(uint8_t **)p = data_ov010_021d1850;
    q = (uint32_t *)(p + 0x108);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0x11C);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)(p + 0x12C) = 0;
    *(uint32_t *)(p + 0x130) = 0;
    return p;
}
