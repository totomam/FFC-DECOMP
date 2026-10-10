#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Elem;

void func_0201e92c(uint8_t *self, int32_t idx, const uint32_t *src) {
    Elem *dst = (Elem *)(*(uint8_t **)(self + 0x48) + idx * 0x18);
    dst->w[0] = src[0];
    dst->w[1] = src[1];
    dst->w[2] = src[2];
    dst->w[3] = src[3];
    dst->w[4] = src[4];
    dst->w[5] = src[5];
}
