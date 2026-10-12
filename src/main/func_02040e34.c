#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020af1e0[];
extern uint32_t data_020af310[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_02040e34(uint8_t *obj)
{
    uint32_t *n;
    uint32_t f;
    Pair t;

    n = (uint32_t *)func_0205681c(0x8c);
    if (n != 0) {
        f = *(uint32_t *)(obj + 0x8c);
        func_02056c9c(n, 0);
        n[0] = (uint32_t)data_020af1e0;
        *(uint32_t *)((uint8_t *)n + 0x80) = f;
        *(uint32_t *)((uint8_t *)n + 0x84) = (uint32_t)(obj + 0x90);
        *(uint32_t *)((uint8_t *)n + 0x88) = 0;
    }
    func_02056bc0(obj + 0x14, n);
    t = *(Pair *)data_020af310;
    *(Pair *)(obj + 0x80) = t;
}
