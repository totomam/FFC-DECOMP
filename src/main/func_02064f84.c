#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_02064f84(uint8_t *self, int32_t idx, uint32_t x, uint32_t y) {
    Pair *arr = *(Pair **)(self + 0x68);
    Pair *p = arr + idx;
    p->a = x;
    p->b = y;
}
