#include "ffc/types.h"

extern int32_t func_0201c00c(int32_t a, int32_t b);
extern int32_t data_020b93b8;

typedef struct {
    int32_t a;
    int32_t lo1;
    int32_t lo2;
    int32_t hi1;
    int32_t hi2;
} Elem;

int32_t func_ov003_02154e68(uint8_t *self, int32_t p1, int32_t p2, int32_t *out, ...) {
    int32_t n = 0;
    uint32_t i;
    uint32_t *cnt = (uint32_t *)(self + 0x1d8);
    Elem *base = (Elem *)(self + 0x110);

    for (i = 0; i < *cnt; i++) {
        Elem *e = base + i;
        if (func_0201c00c(data_020b93b8, e->a) != 0) {
            continue;
        }
        if (p1 < e->lo1) {
            continue;
        }
        if (p1 > e->hi1) {
            continue;
        }
        if (p2 < e->lo2) {
            continue;
        }
        if (p2 > e->hi2) {
            continue;
        }
        out[n] = (int32_t)i;
        n++;
    }
    return n;
}
