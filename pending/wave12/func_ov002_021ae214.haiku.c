#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov002_021ae214(Pair *dst, Pair *src) {
    Pair tmp = *(Pair *)((uint8_t *)src + 0x188);
    *dst = tmp;
}
