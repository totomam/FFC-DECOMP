#include "ffc/types.h"

extern void *func_02023618(void *);
extern int32_t *func_020235fc(void *);
extern void func_0209a978(uint32_t, uint32_t);

void *func_020249a4(uint8_t *self, int32_t idx) {
    uint32_t *p;
    uint8_t *base;
    uint32_t f;
    int32_t count;
    p = (uint32_t *)func_02023618(*(void **)(self + 0xe4));
    if (p == 0) {
        return 0;
    }
    base = (uint8_t *)p + 8;
    f = p[1];
    count = *func_020235fc(*(void **)(self + 0xe8));
    if (idx >= count) {
        return 0;
    }
    func_0209a978(*(uint32_t *)(self + 0x180) >> 4, f);
    return base + (uint32_t)(count * f) * 0x30 + idx * 0x30;
}
