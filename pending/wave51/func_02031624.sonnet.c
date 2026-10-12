#include "ffc/types.h"

typedef struct { uint32_t b, c; uint32_t *src; uint32_t d, e; } S;
typedef struct { uint32_t a, b, c; } V;
typedef struct {
    void *vt; uint8_t pad0[0xc0];
    V v1; uint8_t pad1[0xc];
    uint32_t f_dc, f_e0, f_e4;
    V v2; uint32_t f_f4; uint8_t pad2[0x14];
    uint32_t f_10c, f_110;
} T;
extern uint8_t data_020adfb4[];
extern void func_02069434(void *p, uint32_t x);
extern void func_0200acb8(void *c, void *begin, void *end, uint8_t v);
extern void func_02069700(void *p, uint32_t a, uint32_t b);

void *func_02031624(T *p, uint32_t a, S s)
{
    uint32_t *src = s.src;
    uint8_t fill;

    func_02069434(p, 0);
    V *q1 = &p->v1;
    V *q2 = &p->v2;
    p->vt = data_020adfb4;
    p->v1.a = 0;
    p->f_dc = a;
    q1->b = 0;
    q1->c = 0;
    p->f_e0 = s.b;
    p->f_e4 = s.c;
    p->v2.a = 0;
    p->f_f4 = s.d;
    q2->b = 0;
    q2->c = 0;
    p->f_10c = 0;
    p->f_110 = s.e;

    if (src != 0 && src != &p->v2.a) {
        fill = 0;
        func_0200acb8(&p->v2, (void *)src[0], (uint8_t *)src[0] + (src[1] << 4), fill);
    }
    func_02069700(p, 0, 1);
    return p;
}
