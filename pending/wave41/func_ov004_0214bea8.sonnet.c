#include "ffc/types.h"

extern void func_02069434(void *self, int x);
extern uint32_t func_ov004_021534a8(void *p);
extern void *func_02056830(uint32_t size);
extern char data_ov004_021591e0[];

typedef struct {
    void *vt;
    uint8_t pad0[0xb4];
    void *p1;
    uint32_t p2;
    uint32_t c0;
    uint32_t c4;
    uint32_t c8;
    uint32_t cc;
    uint32_t d0;
    uint32_t d4;
    uint32_t d8;
    uint32_t dc;
    void *arr;
} S;

void *func_ov004_0214bea8(void *self, void *p1, uint32_t p2)
{
    S *s = (S *)self;
    uint32_t *q;
    uint32_t i;

    func_02069434(self, 0);
    s->vt = data_ov004_021591e0;
    s->p1 = p1;
    s->p2 = p2;
    q = &s->c4;
    s->c4 = 0;
    s->d0 = 0;
    s->dc = 0;
    q[1] = 0;
    q[2] = 0;
    q = &s->d0;
    q[1] = 0;
    q[2] = 0;
    s->arr = func_02056830(func_ov004_021534a8(p1) << 2);
    for (i = 0; i < func_ov004_021534a8(s->p1); i++) {
        ((uint32_t *)s->arr)[i] = 0;
    }
    return self;
}
