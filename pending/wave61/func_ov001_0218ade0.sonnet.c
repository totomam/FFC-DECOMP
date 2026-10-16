#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef int (*Fn)(void*);
typedef void (*Fn2)(void*, int);
typedef struct O { Fn *vt; uint8_t pad[0xec]; uint32_t s; Pair q; uint8_t pad2[0x6b4-0xfc]; uint32_t c; uint32_t d; uint32_t e; uint32_t f; } O;
extern void func_020375bc(int);
extern Pair data_ov001_02194660;
extern Pair data_ov001_02194668;
void func_ov001_0218ade0(O *p) {
    p->s = 2;
    if (p->vt[13](p)) {
        p->q = data_ov001_02194660;
        return;
    }
    func_020375bc(8);
    if (p->c == 0) {
        p->e++;
    } else {
        p->f++;
    }
    ((Fn2)p->vt[21])(p, p->c == 0);
    p->q = data_ov001_02194668;
}
