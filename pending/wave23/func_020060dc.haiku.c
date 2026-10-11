#include "ffc/types.h"

typedef struct {
    int8_t *bits;
    int32_t count;
    int32_t pad;
    uint8_t enabled;
} S;

void func_020060dc(S *p, int32_t i) {
    if (p->enabled && i < p->count) {
        p->bits[i / 8] &= ~(1 << (i % 8));
    }
}
