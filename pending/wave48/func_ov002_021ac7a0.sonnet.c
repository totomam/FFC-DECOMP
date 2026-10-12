#include "ffc/types.h"

extern void func_02015e8c(void *dst, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_ov002_021aa2c4(uint32_t *out, uint32_t a);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Tmp;

static inline uint32_t get(Tmp *t, uint32_t off)
{
    uint32_t v;
    Tmp *q = t;
    func_02015e8c(t, data_020b8e44);
    v = *(uint32_t *)((uint8_t *)func_02052d90(t->p, t->idx) + off);
    if (t->p != 0) {
            if (q->flag != 0) {
            func_02052d3c(q->p, q->idx);
        }
        func_02052c04(q->p);
    }
    func_02053290(q);
    return v;
}

void func_ov002_021ac7a0(uint32_t *out, uint32_t a, uint32_t mode)
{
    Tmp h1;
    Tmp h2;
    Tmp k1;
    Tmp k2;
    uint32_t t3[3];
    uint32_t t4[9];
    uint32_t r4;
    uint32_t r6;

    switch (mode) {
    case 0:
        *out = 0;
        return;
    case 1:
        r4 = get(&h1, 0x38);
        r6 = get(&h2, 0x3c);
        func_ov002_021aa2c4(t3, a);
        *out = r4 + func_020817c8(r6 - r4, t3[0]);
        return;
    case 2:
        r4 = get(&k1, 0x30);
        r6 = get(&k2, 0x34);
        func_ov002_021aa2c4(t4 + 6, a);
        *out = r4 + func_020817c8(r6 - r4, t4[6]);
        return;
    }
}
