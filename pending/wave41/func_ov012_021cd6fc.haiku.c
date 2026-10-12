#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t index;
    uint8_t flag;
} Buf;

extern void func_02019070(void *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(void *x, uint16_t y);
extern void func_02005988(void *s, uint32_t v);
extern void func_02068ddc(void *a, void *b);
extern void func_020059cc(void *o);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *o);
extern void *data_020b8e44;

void func_ov012_021cd6fc(uint8_t *self, uint32_t idx)
{
    Buf buf;
    uint32_t s[3];
    Buf *pb;
    void **pd;
    uint8_t *t;
    uint16_t val;
    int16_t n;

    pd = &data_020b8e44;
    pb = &buf;
    *(uint16_t *)(self + 0x10e) = (uint16_t)(((uint32_t *)(*(void **)(self + 0xf8)))[idx]);
    func_02019070(pb, *pd);
    n = *(int16_t *)(self + 0x10e);
    t = (uint8_t *)func_02052d90(pb->mar, pb->index);
    val = *(uint16_t *)(t + *(uint32_t *)(t + 0xc) + ((uint32_t)n << 3) + 4);
    func_02005988(s, func_020159c8(*pd, val));
    func_02068ddc(*(void **)(self + 0xe8), s);
    func_020059cc(s);
    if (pb->mar != 0) {
        if (pb->flag != 0) {
            func_02052d3c(pb->mar, pb->index);
        }
        func_02052c04(pb->mar);
    }
    func_02053290(pb);
}
