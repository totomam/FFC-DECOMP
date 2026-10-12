#include "ffc/types.h"

extern void func_02091a24(void *p);
extern void func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_020258b4(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b0540[];
extern uint8_t data_020b0524[];

typedef struct Loc { uint32_t a,b,c; uint32_t *dead; struct Node *guard; } Loc;
typedef struct Node {
    uint32_t f0, f4, f8, fc, f10, f14;
} Node;

void *func_0205341c(uint32_t *list, uint32_t *out, uint32_t flagA, uint32_t flagB, uint32_t *src)
{
    volatile uint32_t fb = flagB;
    volatile uint32_t fa = flagA;
    Node *n;
    volatile Loc L;
    uint32_t *p12;

    if (list[0] == 0xffffffffu) {
        func_02091a24(data_020b0540);
        func_0208f42c();
    }
    n = (Node *)func_0205681c(0x18);
    if (n == 0) {
        func_02091a24(data_020b0524);
        func_0208f42c();
    }
    L.guard = n;
    L.dead = list + 1;
    p12 = &n->fc;
    if (p12 != 0) {
        p12[0] = src[0];
        p12[1] = src[1];
        p12[2] = src[2];
    }
    n = L.guard;
    L.guard = 0;
    n->f4 = 0;
    n->f0 = 0;
    if (&n->f8 != 0) {
        n->f8 = (uint32_t)out;
    }
    if (fa != 0) {
        out[0] = (uint32_t)n;
    } else {
        out[1] = (uint32_t)n;
    }
    list[0] = list[0] + 1;
    func_020258b4(n);
    if (fb != 0) {
        list[2] = (uint32_t)n;
    }
    if (L.guard != 0) {
        func_02056844(L.guard);
    }
    return n;
}
