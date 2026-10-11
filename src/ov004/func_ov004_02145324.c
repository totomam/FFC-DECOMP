#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
    uint32_t w24;
} Obj;

extern void func_01ffd12c(uint32_t a, uint32_t b);
extern void func_01ffcf30(uint32_t a, uint32_t b, uint32_t c);

void func_ov004_02145324(Obj *p)
{
    if (p->w24 == 0) {
        func_01ffd12c(p->w14, p->w1c);
        func_01ffd12c(p->w18, p->w1c);
    }
    func_01ffcf30(p->w14, p->w24, p->w20);
    func_01ffcf30(p->w18, p->w24, p->w20);
    p->w24++;
    if (p->w24 >= p->w20) {
        p->wc = (p->wc & ~0xffu) | 2;
    }
}
