#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x1c];
    uint32_t f1c;
} Inner;

typedef struct Outer {
    uint32_t a0;
    Inner *inner;
    uint8_t pad8[0x24];
    uint8_t b2c;
    uint8_t b2d[2];
    uint8_t b2f;
    uint32_t w30;
    uint8_t pad34[8];
    uint8_t b3c;
} Outer;

extern void func_02089b68(uint8_t x);
extern void func_02089c28(uint8_t x, uint32_t y);
extern void func_02079e58(Outer *p);
extern uint32_t func_0208a17c(void);

void func_02079d80(Outer *p)
{
    Inner *in = p->inner;
    func_02089b68(p->b3c);
    if (in->f1c != 0) {
        func_02089c28(p->b3c, 0xffff);
    }
    func_02079e58(p);
    p->w30 = func_0208a17c();
    p->b2f = 1;
    p->b2c = 1;
}
