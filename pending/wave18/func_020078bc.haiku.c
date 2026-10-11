#include "ffc/types.h"

extern void func_0207b8cc(void *p);

typedef struct {
    uint8_t pad0[8];
    int16_t f8;
    int16_t fa;
    uint32_t fc;
    uint8_t f10;
    uint8_t f11;
    uint8_t f12;
} S;

void func_020078bc(S *p) {
    p->f8 = -1;
    p->fa = 0x7f;
    p->fc = 0;
    p->f10 = 0;
    p->f11 = 0;
    p->f12 = 0;
    func_0207b8cc(p);
    func_0207b8cc(&p->pad0[4]);
}
