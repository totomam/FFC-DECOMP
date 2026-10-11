#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint32_t f5;
} Item;

void func_0201ed30(uint8_t *p, uint32_t a, int32_t b, Item *out) {
    int32_t idx;
    Item *src;
    if (a <= 1) {
        a = 1;
    }
    a = a - 1;
    a = a << 3;
    idx = b + a;
    src = (Item *)(*(uint8_t **)(p + 0x78) + idx * 24);
    out->f0 = ((Item *)(*(uint8_t **)(p + 0x78) + idx * 24))->f0;
    out->f1 = src->f1;
    out->f2 = src->f2;
    out->f3 = src->f3;
    out->f4 = src->f4;
    out->f5 = src->f5;
}
