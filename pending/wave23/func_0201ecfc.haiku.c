#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Ent;

void func_0201ecfc(uint8_t *p, uint32_t n, int i, Ent *src) {
    int k;
    Ent *e;
    if (n <= 1) {
        n = 1;
    }
    k = i + ((n - 1) << 3);
    e = &((Ent *)(*(uint8_t **)(p + 0x78)))[k];
    e->w[0] = src->w[0];
    e->w[1] = src->w[1];
    e->w[2] = src->w[2];
    e->w[3] = src->w[3];
    e->w[4] = src->w[4];
    e->w[5] = src->w[5];
}
