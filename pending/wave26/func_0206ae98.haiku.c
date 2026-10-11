#include "ffc/types.h"

extern uint32_t data_0213df20;
extern char data_020b1c6c[];
extern char data_020b1c80[];
extern uint32_t func_0204f210(uint32_t v);
extern void func_0206abcc(void *p, uint32_t a, uint32_t b, int c);

typedef struct {
    void *vt;
    uint32_t pad[4];
    void *f14;
} S;

S *func_0206ae98(S *p, uint32_t a, uint32_t b)
{
    uint32_t r;
    if (b == 0) {
        r = data_0213df20;
    } else {
        r = b;
    }
    r = func_0204f210(r);
    func_0206abcc(p, a, r, 2);
    p->vt = data_020b1c6c;
    p->f14 = data_020b1c80;
    return p;
}
