#include "ffc/types.h"

typedef struct G {
    uint32_t pad;
    uint8_t *ctx;
} G;

extern G data_ov006_021bc778;

void func_ov006_021a9b08(int32_t a, int32_t b) {
    G *g = &data_ov006_021bc778;
    if (a >= g->ctx[0x51]) {
        return;
    }
    {
        uint8_t *obj = *(uint8_t **)(g->ctx + 4 * b + 0x10);
        uint32_t off = 0x2a * a;
        uint32_t k = (*(uint8_t **)g->ctx)[off + 0x28];
        uint16_t v = *(uint16_t *)(g->ctx + 2 * k + 0x42);
        *(uint16_t *)(obj + 4) = (uint16_t)((*(uint16_t *)(obj + 4) & 0xfc00) | v);

        uint8_t *obj2 = *(uint8_t **)(g->ctx + 4 * b + 0x24);
        uint32_t j = *(uint16_t *)(*(uint8_t **)g->ctx + off + 0x26);
        uint16_t w = *(uint16_t *)(g->ctx + 2 * j + 0x48);
        *(uint16_t *)(obj2 + 4) = (uint16_t)((*(uint16_t *)(obj2 + 4) & 0xfc00) | w);
    }
}
