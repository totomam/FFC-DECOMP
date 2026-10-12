#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src);
extern int func_ov006_0219ce9c(int id);

struct G {
    uint32_t pad0;
    uint8_t *base;
    uint32_t stride;
    int32_t max;
};
extern struct G data_ov006_021ba1c8;

void *func_ov006_0219ce38(uint8_t *p, int id) {
    uint8_t *base;
    uint8_t *dst;
    int idx;
    int i;
    int off;

    base = data_ov006_021ba1c8.base;
    if (base == 0) {
        return 0;
    }
    idx = p[2];
    if (idx > data_ov006_021ba1c8.max) {
        return 0;
    }
    i = id - 1;
    off = i << 5;
    dst = base + off;
    func_02084ca4(p + 3, dst + idx * data_ov006_021ba1c8.stride);
    ((uint32_t *)(data_ov006_021ba1c8.base + 0x1e0))[i] |= 1u << idx;
    if (func_ov006_0219ce9c(id) != 0) {
        return data_ov006_021ba1c8.base + off;
    }
    return 0;
}
