#include "ffc/types.h"

extern void *data_0213df20;
extern char data_020b1c6c[];
extern char data_020b1c80[];
extern void *func_0204f210(void *v);
extern void func_0206abcc(void *p, uint32_t a, void *b, int c);

typedef struct {
    void *vt;
    uint32_t pad[4];
    void *f14;
} S;

S *func_0206ae98(S *p, uint32_t a, void *b)
{
    void *r;
    if (b != 0) {
        r = func_0204f210(b);
    } else {
        r = func_0204f210(data_0213df20);
    }
    func_0206abcc(p, a, r, 2);
    p->vt = data_020b1c6c;
    p->f14 = data_020b1c80;
    return p;
}
