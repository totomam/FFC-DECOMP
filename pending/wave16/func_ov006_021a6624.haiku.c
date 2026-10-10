#include "ffc/types.h"

typedef struct {
    uint32_t *tbl;
    uint8_t *base;
} S;

void func_ov006_021a6624(S *s, uint32_t idx, int32_t n, uint32_t v) {
    uint16_t *p = (uint16_t *)(s->tbl[(uint16_t)idx] + (uint32_t)s->base);
    if (n >= 0) {
        p[n] = (uint16_t)(v + 0x30);
    }
}
