#include "ffc/types.h"

extern void func_020212a4(int x);
extern uint32_t func_02056aec(void *a);
extern uint32_t func_0203c0a8(int x);
extern uint32_t func_0203c094(int x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

typedef struct Obj {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t ctl;
} Obj;

void func_ov007_0219f55c(uint8_t *a)
{
    Obj *obj;
    uint32_t r;
    uint32_t r7, r4, r6, sv;

    obj = *(Obj **)(a + 0x98);
    obj->ctl = (obj->ctl & ~0xffu) | 2;

    **(uint32_t **)(a + 0x88) = 1;

    if (*(uint32_t *)(a + 0x8c) == 1) {
        r = 2;
        if (*(uint32_t *)(a + 0x94) == 1) {
            r = 3;
        }
        **(uint32_t **)(a + 0x88) = r;
    }

    if (a[0x90] != 0) {
        func_020212a4(15);
        r7 = func_02056aec(a);
        sv = func_0203c0a8(30);
        r4 = func_0203c094(30);
        r6 = func_0203b6fc();
        func_02056bc0((void *)r6, (void *)r4);
        func_02056bc0((void *)r6, (void *)sv);
        func_02056bc0((void *)(a + 0x14), (void *)r6);
        func_02056bc0((void *)(a + 0x14), (void *)r7);
    } else {
        Obj *f = (Obj *)a;
        f->ctl = (f->ctl & ~0xffu) | 2;
    }
}
