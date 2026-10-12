#include "ffc/types.h"

extern uint32_t func_ov004_0215352c(uint8_t *p);
extern uint32_t data_ov004_02159cd8[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov004_02154b34(uint8_t *p)
{
    uint32_t i;

    for (i = 0; i < func_ov004_0215352c(p); i++) {
        uint32_t v = *(uint32_t *)(p + 0x100 + i * 4);
        void *obj = *(void **)(p + i * 0x34 + (v << 2) + 0x120);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[4])(obj);
    }

    *(uint32_t *)(p + 0x21c) = 0;
    *(Pair *)(p + 0x94) = *(Pair *)data_ov004_02159cd8;
}
