#include "ffc/types.h"

typedef void (*VFn)(void *);

extern char data_ov004_021583b4[];
extern void func_01ffcc3c(void *p);
extern void func_01ffccbc(void *p);
extern void func_01ffac64(void *p);
extern void func_02056844(void *p);
extern void func_020597d8(void *p);
extern void func_0205847c(void *a, void *b);
extern void func_ov004_02148680(void *p);
extern void func_02063530(void *p);
extern void func_0209d02c(void *p, int a, int b, void (*f)(void));
extern void func_02062868(void *p);
extern void func_ov004_02148404(void);

void *func_ov004_02148410(uint8_t *self)
{
    int i;
    void *o;
    void **p;
    uint8_t *b;

    *(char **)self = data_ov004_021583b4;
    func_01ffcc3c(self);
    func_01ffccbc(self);

    for (i = 0; i < 2; i++) {
        b = self + i * 12;
        for (p = *(void ***)(b + 0x50); p != *(void ***)(b + 0x50) + *(uint32_t *)(b + 0x54); p++) {
            o = *p;
            if (o != 0) {
                func_01ffac64(o);
                func_02056844(o);
            }
        }
    }

    o = *(void **)(self + 0xac);
    if (o != 0) {
        VFn *vt = *(VFn **)o;
        vt[1](o);
    }

    o = *(void **)(self + 0x98);
    if (o != 0) {
        VFn *vt = *(VFn **)o;
        vt[1](o);
    }

    func_02056844(*(void **)(self + 0x90));

    {
        uint8_t *r4 = *(uint8_t **)(*(uint8_t **)(self + 0x30) + 0x14);
        if (*(void **)(self + 0x44) != 0) {
            func_020597d8(r4);
        }
        if (self[0x2c] == 0) {
            func_0205847c(*(void **)(r4 + 0x34), *(void **)(self + 0x48));
        }
    }

    func_ov004_02148680(self + 0xa0);
    func_02063530(self + 0x9c);
    func_0209d02c(self + 0x50, 2, 0xc, func_ov004_02148404);
    func_02062868(self);
    func_02056844(self);
    return self;
}
