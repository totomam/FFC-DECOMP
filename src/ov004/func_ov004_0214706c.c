#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_ov004_0215572c(void *a);
extern Pair data_ov004_02157d84;
extern Pair data_ov004_02157d8c;

void func_ov004_0214706c(void *self)
{
    uint8_t *p = (uint8_t *)self;

    if (**(uint8_t **)(p + 0x8c) == 0) {
        uint32_t *w = (uint32_t *)(p + 0xc);
        *w = (*w & ~0xffu) | 2;
        return;
    }

    if (func_ov004_0215572c(*(void **)(p + 0x88))) {
        *(Pair *)(p + 0x80) = data_ov004_02157d84;
        return;
    }
    *(Pair *)(p + 0x80) = data_ov004_02157d8c;
}
