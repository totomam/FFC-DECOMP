#include "ffc/types.h"
extern void *func_0205681c(uint32_t sz);
extern void func_02056c9c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
typedef struct { uint32_t a, b, c; } S;
extern uint32_t data_ov003_021795fc;
void *func_ov003_0214c118(uint32_t p0, S s, uint32_t p4, uint32_t p5, uint16_t p6, uint32_t p7) {
    uint8_t *o = (uint8_t *)func_0205681c(0xa4);
    if (o != 0) {
        func_02056c9c(o, 0, s.b, s.c, s.c, p4);
        *(uint32_t *)o = (uint32_t)&data_ov003_021795fc;
        *(uint32_t *)(o + 0x84) = p0;
        *(uint32_t *)(o + 0x88) = s.a;
        *(uint32_t *)(o + 0x8c) = s.b;
        *(uint32_t *)(o + 0x90) = s.c;
        *(uint32_t *)(o + 0x94) = p4;
        *(uint32_t *)(o + 0x98) = p5;
        *(uint16_t *)(o + 0x9c) = p6;
        *(uint32_t *)(o + 0xa0) = p7;
    }
    return o;
}
