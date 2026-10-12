#include "ffc/types.h"

extern uint32_t data_020b93b8;
typedef struct { uint32_t lo, hi; } Pair;
extern Pair data_020af2e8;
extern uint32_t data_020af198;
extern Pair data_020af2f0;
extern int func_0201e9f8(uint32_t v);
extern uint32_t func_0203f784(void *object, int v);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *node, int a);
extern void func_0201c220(uint32_t obj, int a, int b);

void func_02040cc0(uint8_t *a) {
    if (func_0201e9f8(data_020b93b8) == 0) {
        uint32_t r1 = func_0203f784(a, 3);
        func_02056bc0(a + 0x14, (void *)r1);
        {
            *(Pair *)(a + 0x80) = data_020af2e8;
        }
        return;
    }
    {
        uint8_t *n = (uint8_t *)func_0205681c(0x88);
        if (n != 0) {
            uint32_t f = *(uint32_t *)(a + 0x88);
            func_02056c9c(n, 0);
            *(uint32_t *)n = (uint32_t)&data_020af198;
            *(uint32_t *)(n + 0x80) = f;
            *(uint32_t *)(n + 0x84) = 0;
        }
        func_02056bc0(a + 0x14, n);
        func_0201c220(data_020b93b8, 0x10, 0);
        {
            *(Pair *)(a + 0x80) = data_020af2f0;
        }
    }
}
