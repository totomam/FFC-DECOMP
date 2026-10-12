#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void *func_0206cd68(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a7b9c(void *p);
extern int func_ov007_021a2664(int v);
extern void func_ov007_021a7c30(void *p);
extern void func_020559d4(void *p);
extern uint32_t data_ov007_021c46d4[];

typedef struct { uint32_t a, b; } Pair;

void func_ov007_021a8340(void *self)
{
    uint8_t *p = (uint8_t *)self;

    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        void *r = func_0206cd68(*(void **)(p + 0xc8));
        func_02056bc0(p + 0x14, r);
        func_ov007_021a7b9c(p);
        return;
    }

    if (*(uint8_t *)(p + 0x14c) != 0) {
        int v = func_ov007_021a2664(*(int *)(p + 0x148));
        func_02056bc0(p + 0x14, (void *)v);
        func_ov007_021a7c30(p);
        *(Pair *)(p + 0xb8) = *(Pair *)data_ov007_021c46d4;
        return;
    }

    {
        int n = *(int *)(p + 0xf4) - 1;
        *(int *)(p + 0xf4) = n;
        if (n == 0) {
            func_ov007_021a7c30(p);
            func_ov007_021a7b9c(p);
            return;
        }
        func_020559d4(p + 0x80);
    }
}
