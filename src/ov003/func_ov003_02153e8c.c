#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern int32_t func_ov003_02153e28(void *p, uint32_t x);

void *func_ov003_02153e8c(void *a, uint32_t b) {
    uint8_t *p = (uint8_t *)func_02052d90(*(void **)((uint8_t *)a + 0xf4), *(uint32_t *)((uint8_t *)a + 0xf8));
    int32_t r = func_ov003_02153e28(p, b);
    uint32_t idx;
    if (r != -1) {
        uint8_t *base = p + *(int32_t *)(p + 0x10);
        idx = base[r];
    } else {
        idx = 0;
    }
    uint8_t *m = (uint8_t *)func_02052d90(*(void **)((uint8_t *)a + 0xe4), *(uint32_t *)((uint8_t *)a + 0xe8));
    return m + *(int32_t *)(m + 0x54) + 20 * idx;
}
