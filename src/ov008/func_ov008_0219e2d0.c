#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *w4;
    uint32_t w8;
    uint8_t b12;
} Loc;

extern void func_02018ec8(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;

uint32_t func_ov008_0219e2d0(uint8_t *self, uint32_t idx)
{
    Loc loc;
    Loc *l;
    uint8_t *p;
    uint32_t k;
    uint8_t *q;
    uint32_t ret;

    l = &loc;
    func_02018ec8(l, data_020b8e44);
    k = ((uint32_t **)(self + 0xf4))[0][idx];
    p = func_02052d90(l->w4, l->w8);
    q = p + *(uint32_t *)(p + *(uint32_t *)(p + 8) + (k << 2));
    ret = *(uint32_t *)(q + 8);
    if (l->w4 != 0) {
        if (l->b12 != 0) {
            func_02052d3c(l->w4, l->w8);
        }
        func_02052c04(l->w4);
    }
    func_02053290(l);
    return ret;
}
