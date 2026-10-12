#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t f12;
} FfcTmp;

extern uint32_t data_020b8e44;
extern void func_02019070(void *out, uint32_t ctx);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

static inline uint32_t get(uint32_t *pi)
{
    FfcTmp t;
    FfcTmp *p = &t;
    uint32_t idx;
    uint32_t v;
    uint8_t *r;
    func_02019070(p, data_020b8e44);
    idx = *pi;
    r = func_02052d90(p->f4, p->f8);
    v = (r + *(uint32_t *)(r + 0xc))[idx * 8];
    if (p->f4 != 0) {
        if (p->f12 != 0) {
            func_02052d3c(p->f4, p->f8);
        }
        func_02052c04(p->f4);
    }
    func_02053290(p);
    return v;
}

int func_ov012_021cd34c(int unused, uint32_t *pa, uint32_t *pb)
{
    uint32_t va = get(pa);
    uint32_t vb = get(pb);
    return va < vb;
}
