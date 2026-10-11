#include "ffc/types.h"

extern void func_02056858(void *);
extern void func_0200d5ec(void *);
extern void func_020695d0(void *);
extern void func_02056844(void *);
extern char data_ov004_021591e0[];

typedef struct Obj {
    void *vt;
    char pad_04[0xc4 - 4];
    char s_c4[0xd0 - 0xc4];
    char s_d0[0xe0 - 0xd0];
    void *f_e0;
} Obj;

Obj *func_ov004_0214bf6c(Obj *p)
{
    p->vt = data_ov004_021591e0;
    if (p->f_e0 != 0) {
        func_02056858(p->f_e0);
        p->f_e0 = 0;
    }
    func_0200d5ec(&p->s_d0);
    func_0200d5ec(&p->s_c4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
