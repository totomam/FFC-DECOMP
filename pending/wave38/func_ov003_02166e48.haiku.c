#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} S4;

typedef struct {
    void *vt;
    uint8_t pad[0x80];
    uint32_t f[8];
} Obj;

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217b004[];

void *func_ov003_02166e48(S4 a, S4 b)
{
    Obj *p = (Obj *)func_0205681c(0xa4);
    if (p) {
        func_02056c9c(p, 0);
        p->vt = data_ov003_0217b004;
        p->f[0] = a.w[0];
        p->f[1] = a.w[1];
        p->f[2] = a.w[2];
        p->f[3] = a.w[3];
        p->f[4] = b.w[0];
        p->f[5] = b.w[1];
        p->f[6] = b.w[2];
        p->f[7] = b.w[3];
    }
    return p;
}
