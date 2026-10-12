#include "ffc/types.h"

extern char data_ov011_021cbc5c[];
extern void *data_0213df20;
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_0206047c(void *p);
extern void func_020367a8(void *p);
extern void func_0209d02c(void *p, int a, int b, void *fn);
extern void *func_020059cc(void *object);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern void *func_02035fd0(void *object);

typedef struct Obj {
    void *vt;
    uint8_t pad0[0xe4];
    void *slot[5];
} Obj;

Obj *func_ov011_021c716c(Obj *p)
{
    uint8_t i;
    void **q;

    p->vt = (void *)data_ov011_021cbc5c;
    for (i = 0; i < 5; i++) {
        void *r = p->slot[i];
        if (r != 0) {
            func_0205d620(r);
            func_02056844(r);
            p->slot[i] = 0;
        }
    }
    func_0206047c(*(void **)((uint8_t *)data_0213df20 + 0x20));
    func_020367a8((uint8_t *)p + 0x350);
    q = (void **)p;
    func_0209d02c(&q[0x4d + 3], 5, 0x60, func_02035fd0);
    func_020059cc(&q[0x4d]);
    func_0200d5ec(&q[0x49]);
    func_020695d0(p);
    return p;
}
