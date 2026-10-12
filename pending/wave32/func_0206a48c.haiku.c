#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void *func_0206975c(void *p);
extern void func_02069848(void *p, uint32_t x);
extern void func_02069dcc(void *p, void *q);
extern Pair data_020b1b68;

void func_0206a48c(void *p)
{
    void *q = func_0206975c(p);
    uint32_t v = (*(uint32_t **)((uint8_t *)p + 0x88))[1];
    if (!(v & *(uint32_t *)((uint8_t *)q + 0x8c))) {
        func_02069848(p, 0);
        func_02069dcc(p, q);
        *(Pair *)((uint8_t *)p + 0x80) = data_020b1b68;
        return;
    }
    ((void (*)(void *))(*(void ***)p)[5])(p);
}
