#include "ffc/types.h"

typedef struct Obj {
    uint32_t p00, p04, p08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t p18[12];
    uint32_t f48;
    uint32_t f4c;
} Obj;

extern void func_0204f218(uint32_t a, uint32_t b);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_0205ae60(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0208763c(uint32_t p);
extern void func_02087678(uint32_t p);

uint32_t func_02059aec(Obj *o)
{
    uint32_t local[2];
    uint32_t *lp = local;
    uint32_t r4;
    uint32_t r6;

    func_0204f218(o->f0c, 1);
    r4 = func_0205681c(0x110);
    if (r4 != 0) {
        r4 = func_0205ae60(r4, o->f0c, o->f48, o->f4c);
    }
    r6 = o->f10 + 0x20;
    (void)lp;
    func_0208763c(r6);
    o->f14 = r4;
    func_02087678(r6);
    return r4;
}
