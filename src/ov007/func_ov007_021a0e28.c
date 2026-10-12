#include "ffc/types.h"

extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_02062a30(void *owner);
extern void func_ov007_021a05c4(void *a, uint8_t b);
extern void func_02056c4c(void *p);
extern void func_02056bf4(void *object, void *node);
extern uint8_t data_ov007_021c32a8[];

typedef struct { void *a; void *b; } Pair;

#define FLD(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define VFN(obj, off) (*(void **)((uint8_t *)*(void **)(obj) + (off)))

void func_ov007_021a0e28(void *self, void *arg)
{
    void *x;
    Pair *ps;
    if (arg != 0) {
        if (FLD(self, 0x98) == 0) {
            x = func_0203b95c(*(void **)((uint8_t *)data_ov007_021c32a8 + 0x20),
                              *(void **)((uint8_t *)FLD(self, 0x94) + 0xc4), 2, 1);
            FLD(self, 0x98) = x;
            ps = (Pair *)((uint8_t *)self + 0xa0);
            ((void (*)(void *, Pair))VFN(x, 0xc))(x, *ps);
            func_02056bc0((uint8_t *)self + 0x48, FLD(self, 0x98));
        }

        x = FLD(self, 0x98);
        ((void (*)(void *, int, int))VFN(x, 0x38))(x, 1, 0);
        x = FLD(self, 0x98);
        ((void (*)(void *))VFN(x, 0x28))(x);
        x = func_02062a30(FLD(self, 0x98));
        func_02056bc0((uint8_t *)self + 0x14, x);
        x = FLD(self, 0x98);
        ((void (*)(void *, int, int))VFN(x, 0x38))(x, 1, 0);
        func_ov007_021a05c4(FLD(self, 0x94), *((uint8_t *)self + 0x9c));
    } else {
        if (FLD(self, 0x98) != 0) {
            func_02056c4c((uint8_t *)self + 0x14);
            func_02056bf4((uint8_t *)self + 0x48, FLD(self, 0x98));
            x = FLD(self, 0x98);
            if (x != 0) {
                if (x != 0) {
                    ((void (*)(void *))VFN(x, 4))(x);
                }
                FLD(self, 0x98) = 0;
            }
            FLD(self, 0x98) = 0;
        }
    }
}
