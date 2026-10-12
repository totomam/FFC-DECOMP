#include "ffc/types.h"

extern void func_02016b68(void *obj, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint64_t func_0201b7b0(void *p);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;
extern void *data_020b93b8;
extern uint64_t data_ov007_021c46bc;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Local;

void func_ov007_021a81dc(void *self)
{
    Local loc;
    Local *p = &loc;
    uint16_t *m;
    int32_t v;
    uint64_t t;

    func_02016b68(p, data_020b8e44);
    m = (uint16_t *)func_02052d90(p->f4, p->f8);
    v = m[2];
    t = func_0201b7b0(data_020b93b8);
    *(int64_t *)((uint8_t *)self + 0x140) = (int64_t)t + v;
    if (p->f4 != 0) {
        if (p->fc != 0) {
            func_02052d3c(p->f4, p->f8);
        }
        func_02052c04(p->f4);
    }
    func_02053290(p);
    uint64_t dv = data_ov007_021c46bc;
    *(uint32_t *)((uint8_t *)self + 0xb8) = (uint32_t)dv;
    *(uint32_t *)((uint8_t *)self + 0xbc) = (uint32_t)(dv >> 32);
}
