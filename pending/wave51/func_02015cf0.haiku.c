#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void func_020199f4(void *out, uint32_t x);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t func_02086ad4(void *object, const void *first, ...);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern uint8_t data_020b8df0[];
extern uint8_t data_020acdf8[];

uint32_t func_02015cf0(void *unused, void *out, uint32_t a, uint32_t b, uint8_t flag)
{
    uint32_t s[4];
    uint8_t t[0x44];
    uint32_t r4;

    if (flag) {
        uint8_t *ret = (uint8_t *)func_02015ba4(unused, a);
        uint16_t idx = *(uint16_t *)(ret + 0x42);
        uint32_t *p = s;
        func_020199f4(p, *(uint32_t *)(data_020b8df0 + 0x54));
        uint8_t *base = (uint8_t *)func_02052d90((void *)p[1], p[2]);
        uint32_t tbl = *(uint32_t *)(base + 8);
        uint8_t *e = base + ((uint32_t *)(base + tbl))[idx];
        uint32_t off = ((uint32_t *)(e + *(uint32_t *)(e + 8)))[b];
        r4 = (uint32_t)(int32_t)*(int16_t *)(e + off);
        if (p[1] != 0) {
            if (*((uint8_t *)p + 0xc)) {
                func_02052d3c((void *)p[1], (void *)p[2]);
            }
            func_02052c04((void *)p[1]);
        }
        func_02053290(p);
    } else {
        r4 = a;
    }

    func_02086ad4(t, data_020acdf8, r4, b);
    return func_02005f1c(out, (uint32_t)t);
}
