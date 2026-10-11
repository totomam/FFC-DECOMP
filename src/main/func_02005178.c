#include "ffc/types.h"

extern int data_020a7dc0;
extern uint32_t func_0203b7c0(uint32_t x);
extern void func_02005274(void *p);

typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint8_t f14;
} S;

void *func_02005178(void *p0, uint32_t p1, uint32_t p2, uint8_t p3) {
    S *s = (S *)p0;
    s->f4 = p1;
    s->f8 = 0;
    s->vt = &data_020a7dc0;
    s->fc = 0;
    s->f10 = 0;
    s->f14 = p3;
    s->f8 = func_0203b7c0(p2);
    func_02005274(s);
    return s;
}
