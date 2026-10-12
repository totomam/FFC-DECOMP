#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055c20(void *p, void *q);
extern uint32_t data_020b0790[];
extern void *data_0213e1f8;

void func_02074fa8(void *p0, uint32_t a, uint32_t b, uint32_t c, void *d, uint8_t *e)
{
    void *ctx;
    void *obj;
    uint32_t flag;

    if (*(void **)(e + 0x426c) != 0) {
        ctx = *(void **)(e + 0x4270);
        ((void (*)(void *, uint32_t, uint32_t, void *, void *))(*(void **)(e + 0x426c)))(p0, a, c, d, ctx);
    }
    obj = func_0205681c(0x18);
    if (obj != 0) {
        uint8_t *o = (uint8_t *)obj;
        flag = 0;
        *(uint32_t *)(o + 8) = 0;
        *(uint32_t *)(o + 0xc) = 0x21;
        *(uint32_t **)o = data_020b0790;
        if (a != 0) {
            flag = 1;
        }
        o[0x10] = (uint8_t)flag;
        flag = 1;
        if (b == 0) {
            flag = 0;
        }
        o[0x11] = (uint8_t)flag;
        o[0x12] = (uint8_t)c;
        *(void **)(o + 0x14) = d;
    }
    func_02055c20((uint8_t *)data_0213e1f8 + 0x14, obj);
}
