#include "ffc/types.h"

typedef struct {
    int8_t *bits;
    int32_t count;
    int32_t pad;
    uint8_t enabled;
} BitSet;

void func_020060a8(BitSet *p, int32_t idx) {
    if (p->enabled) {
        if (idx < p->count) {
            int32_t byte = idx / 8;
            int32_t bit = idx % 8;
            int32_t mask = 1 << bit;
            int8_t *bits = p->bits;
            bits[byte] = (int8_t)(bits[byte] | mask);
        }
    }
}
