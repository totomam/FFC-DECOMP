#include "ffc/types.h"
typedef struct { void *vt; uint8_t pad[0x80]; uint32_t f[8]; } Obj;
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217b004[];
void *func_ov003_02166e48(uint32_t a, uint32_t b, ...)
{
    Obj *p = (Obj *)func_0205681c(0xa4);
    if (p) {
        func_02056c9c(p, 0);
        p->vt = data_ov003_0217b004;
        p->f[0] = a; p->f[1] = (&b)[0]; p->f[2] = (&b)[1]; p->f[3] = (&b)[2];
        p->f[4] = (&b)[3]; p->f[5] = (&b)[4]; p->f[6] = (&b)[5]; p->f[7] = (&b)[6];
    }
    return p;
}
