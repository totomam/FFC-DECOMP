#include "ffc/types.h"

typedef struct {
    uint32_t *tbl;
    uint8_t *base;
} S;

void func_ov006_021a6624(S *s, uint32_t idx, int32_t n, uint32_t v) {
    uint8_t *b = s->base;
    uint32_t *t = s->tbl;
    uint16_t *p = (uint16_t *)(b + t[(uint16_t)idx]);
    int32_t k = n;
    if (k < 0) return;
    v += 0x30;
    p[k] = v;
}
