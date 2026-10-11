#include "ffc/types.h"

extern uint32_t func_ov002_02198dec(uint32_t);
extern void func_ov002_0219f4d0(uint32_t, uint32_t);

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint8_t f18;
    uint8_t pad19[3];
    uint32_t f1c;
} S;

void func_ov002_02197ae4(S *p)
{
    if (p->f18 && p->f14) {
        p->f1c++;
        func_ov002_0219f4d0(func_ov002_02198dec(p->f14), p->f1c);
    }
}
