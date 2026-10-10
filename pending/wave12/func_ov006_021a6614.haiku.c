#include "ffc/types.h"

typedef struct {
    uint32_t *base;
    uint32_t add;
} S;

uint32_t func_ov006_021a6614(S *s, uint32_t idx) {
    return s->base[(uint16_t)idx] + s->add;
}
