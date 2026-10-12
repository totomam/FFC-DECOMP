#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void func_020199f4(void *out, void *src);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_020b8df0[];
extern uint8_t data_020ace14[];

uint32_t func_02015d78(void *unused, void *obj, uint32_t x, uint32_t y, uint8_t flag)
{
    uint32_t val = x;

    if (flag) {
        uint8_t *base = (uint8_t *)func_02015ba4(unused, x);
        uint32_t idx = *(uint16_t *)(base + 0x42);
        uint32_t loc[4];
        uint32_t *p = loc;
        func_020199f4(p, *(void **)(data_020b8df0 + 0x54));
        {
            uint8_t *m = (uint8_t *)func_02052d90((void *)p[1], p[2]);
            uint32_t off1 = *(uint32_t *)(m + *(uint32_t *)(m + 8) + idx * 4);
            uint8_t *t2 = m + off1;
            uint32_t off2 = *(uint32_t *)(t2 + *(uint32_t *)(t2 + 8) + y * 4);
            val = *(int16_t *)(t2 + off2);
        }
        if (p[1] != 0) {
            if (((uint8_t *)p)[12]) {
                func_02052d3c((void *)p[1], p[2]);
            }
            func_02052c04((void *)p[1]);
        }
        func_02053290(p);
    }

    return func_02086ad4(obj, (uint32_t)data_020ace14, val, y);
}
