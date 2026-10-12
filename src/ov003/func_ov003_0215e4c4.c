#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_02016448(void *out, uint32_t arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_ov003_0215e48c(uint32_t a, uint32_t b, uint16_t c, int16_t d);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Ent;

void func_ov003_0215e4c4(uint32_t a, uint32_t b)
{
    Ent s2;
    Ent s1;
    Ent *p1;
    Ent *q;
    int16_t r4;
    uint16_t r2;

    func_02016448(&s2, data_020b8e44);
    func_02016448(&s1, data_020b8e44);
    p1 = &s1;

    r4 = *(int16_t *)((uint8_t *)func_02052d90(s1.f4, s1.f8) + 10);
    {
        uint8_t *t = (uint8_t *)func_02052d90(s2.f4, s2.f8);
        r2 = *(uint16_t *)(t + 8);
    }

    func_ov003_0215e48c(a, b, r2, r4);

    if (p1->f4 != 0) {
        if (p1->fc != 0) {
            func_02052d3c(p1->f4, p1->f8);
        }
        func_02052c04(p1->f4);
    }
    func_02053290(p1);

    q = &s2;
    if (q->f4 != 0) {
        if (q->fc != 0) {
            func_02052d3c(q->f4, q->f8);
        }
        func_02052c04(q->f4);
    }
    func_02053290(q);
}
