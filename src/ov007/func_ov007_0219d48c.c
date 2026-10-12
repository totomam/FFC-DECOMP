#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void func_02021338(int x);
extern void func_020696f0(void *p);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c2f78[];

typedef void (*VFn)(void *);
typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov007_0219d48c(uint8_t *self)
{
    void *obj;
    uint8_t *p;
    uint32_t d0;
    uint32_t d1;

    func_02056bf4(*(void **)(self + 0xc8), *(void **)(self + 0xa4));

    if (self[0xec] != 0) {
        func_02021338(0xcf);
        *(uint32_t *)(self + 0xd0) = 2;
        obj = *(void **)(self + 0xa4);
        if (obj != 0) {
            void **vt = *(void ***)obj;
            ((VFn)vt[1])(obj);
        }
        *(void **)(self + 0xa4) = 0;
        self[0xec] = 0;
    } else {
        void *a4;
        void *n;
        func_020696f0(*(void **)(self + 0xa4));
        a4 = *(void **)(self + 0xa4);
        n = func_0203b708(0x1e);
        p = self + 0x14;
        func_02056bc0(p, n);
        func_02056bc0(p, a4);
    }

    *(Pair *)(self + 0x80) = *(Pair *)data_ov007_021c2f78;
}
