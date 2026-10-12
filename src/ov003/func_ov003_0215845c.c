#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_0202d4cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_0202d6ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0202d68c(uint32_t a, uint32_t b, int32_t c, uint32_t d);
extern void func_0202d574(uint32_t a);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_0202d85c(uint32_t a, void *b, uint32_t c);
extern void func_0202d794(uint32_t a);
extern void func_0202d75c(uint32_t a);
extern uint32_t data_ov003_0217a1b8[];

uint32_t func_ov003_0215845c(uint8_t *self, uint32_t flag)
{
    uint32_t r;
    uint32_t v;
    uint32_t buf[17];

    if (*(uint32_t *)(self + 0x124) == 0) {
        r = func_0205681c(0x210);
        if (r != 0) {
            r = func_0202d4cc(r, *(uint32_t *)(self + 0x10c), 0x7fff, 0, 0);
        }
        *(uint32_t *)(self + 0x124) = r;
        func_02056bc0(*(void **)(self + 0x100), (void *)r);
        v = (uint16_t)(0x4000 - *(uint16_t *)(self + 0xbc));
        func_0202d6ec(*(uint32_t *)(self + 0x124), *(uint32_t *)(self + 0xb4),
                      *(uint32_t *)(self + 0x104) + *(uint32_t *)(self + 0x368),
                      *(uint32_t *)(self + 0xb8));
        func_0202d68c(*(uint32_t *)(self + 0x124), 0,
                      ((int32_t)((uint16_t)v * 0x168)) >> 4, 0);
    }
    if (flag == 0) {
        func_0202d574(*(uint32_t *)(self + 0x124));
    } else {
        func_02086ad4(buf, (uint32_t)data_ov003_0217a1b8, flag);
        func_0202d85c(*(uint32_t *)(self + 0x124), buf, 0);
        func_0202d794(*(uint32_t *)(self + 0x124));
        func_0202d75c(*(uint32_t *)(self + 0x124));
    }
    return *(uint32_t *)(self + 0x124);
}
