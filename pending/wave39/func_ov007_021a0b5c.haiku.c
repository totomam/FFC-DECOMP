#include "ffc/types.h"

typedef struct { void *a; void *b; } Pair;

extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_02062a30(void *owner);
extern void func_02056c4c(void *object);
extern int func_020655dc(void *a, int b, int c);
extern void *func_020655b8(void *a);
extern void func_ov007_021a0600(void *a, uint8_t b);
extern void func_02021338(int x);
extern uint8_t data_ov007_021c32a8[];

void func_ov007_021a0b5c(void *this)
{
    uint8_t *p = (uint8_t *)this;

    if (*(void **)(p + 0x98) == 0) {
        *(void **)(p + 0x98) = func_0203b95c(*(void **)(data_ov007_021c32a8 + 0x20),
                                             *(void **)(*(uint8_t **)(p + 0x94) + 0xc4), 2, 1);
        ((void (*)(void *, Pair))(*(void ***)(*(void **)(p + 0x98)))[3])(*(void **)(p + 0x98), *(Pair *)(p + 0xa0));
        func_02056bc0(p + 0x48, *(void **)(p + 0x98));
    }

    ((void (*)(void *, int, int))(*(void ***)(*(void **)(p + 0x98)))[14])(*(void **)(p + 0x98), 1, 0);
    ((void (*)(void *))(*(void ***)(*(void **)(p + 0x98)))[10])(*(void **)(p + 0x98));
    func_02056bc0(p + 0x14, func_02062a30(*(void **)(p + 0x98)));

    if (*(void **)(p + 0x98) != 0) {
        ((void (*)(void *, int, int))(*(void ***)(*(void **)(p + 0x98)))[14])(*(void **)(p + 0x98), 2, 1);
        func_02056c4c(p + 0x14);
        {
            void *r6 = (void *)(uintptr_t)func_020655dc(*(void **)(p + 0x98), 1, 0);
            void *n = func_020655b8(*(void **)(p + 0x98));
            uint8_t *q = p + 0x14;
            func_02056bc0(q, n);
            func_02056bc0(q, r6);
        }
    }

    func_ov007_021a0600(*(void **)(p + 0x94), *(uint8_t *)(p + 0x9c));
    func_02021338(0xcd);
}
