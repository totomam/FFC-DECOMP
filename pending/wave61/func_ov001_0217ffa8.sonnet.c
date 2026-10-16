#include "ffc/types.h"
extern void func_ov001_02181ddc(void *o);
typedef struct O { uint8_t p0[0x14]; int f14; int pad; int f1c; } O;
typedef struct P { uint8_t p0[8]; O *o; uint8_t p1[0x18]; int c24; uint8_t p2[4]; void (*fn)(struct P*, int, int); } P;
int func_ov001_0217ffa8(P *p, int a, int b) {
    O *o;
    if (p == 0) return 1;
    if (p->fn == 0) return 1;
    if (b == 0 || a == 0) { a = 0; b = 0; }
    p->c24++;
    p->o->f1c++;
    p->fn(p, a, b);
    p->c24--;
    p->o->f1c--;
    o = p->o;
    if (o->f14 != 0 && o->f1c == 0) {
        func_ov001_02181ddc(o);
        return 0;
    }
    return 1;
}
