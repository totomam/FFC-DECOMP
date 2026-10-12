#include "ffc/types.h"

#define FLD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

extern void func_ov007_0219ed7c(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219f11c(void *m, void *p8c, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_0219ea28(void *x);
extern void func_ov007_0219ebe4(void *x, int v);

void func_ov007_0219ee88(void *a)
{
    uint32_t mode = FLD(a, 0x88, uint32_t);
    FLD(a, 0x88, uint32_t) = FLD(a, 0x88, uint32_t) + 1;

    switch (mode) {
    case 0: {
        void *node;
        func_ov007_0219ed7c(FLD(a, 0x80, void *));
        node = func_0205681c(0x9c);
        if (node != 0) {
            node = func_ov007_0219f11c(node, (uint8_t *)a + 0x8c, 0, 0);
        }
        func_02056bc0((uint8_t *)a + 0x14, node);
        break;
    }
    case 1: {
        switch (FLD(a, 0x8c, uint32_t)) {
        case 2: {
            uint32_t *q = FLD(a, 0x84, uint32_t *);
            if (q != 0) {
                *q = 1;
            }
            func_ov007_0219ea28(FLD(a, 0x80, void *));
            FLD(a, 0xc, uint32_t) = (FLD(a, 0xc, uint32_t) & ~0xffu) | 2;
            break;
        }
        case 1:
            func_ov007_0219ea28(FLD(a, 0x80, void *));
            FLD(a, 0xc, uint32_t) = (FLD(a, 0xc, uint32_t) & ~0xffu) | 2;
            break;
        case 0:
            func_ov007_0219ebe4(FLD(a, 0x80, void *), 1);
            FLD(a, 0xc, uint32_t) = (FLD(a, 0xc, uint32_t) & ~0xffu) | 2;
            break;
        }
        break;
    }
    }
}
