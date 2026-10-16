#include "ffc/types.h"
typedef struct { uint8_t *tbl; uint8_t *base; } S;
uint16_t *func_ov006_021a6624(S *s, uint32_t i, int32_t j, int32_t v) {
    uint8_t *base = s->base;
    uint8_t *tbl = s->tbl;
    uint16_t *p = (uint16_t *)(base + *(uint32_t *)(tbl + ((i & 0xffff) << 2)));
    if (j >= 0) {
        p[j] = v + 0x30;
    }
    return p;
}
