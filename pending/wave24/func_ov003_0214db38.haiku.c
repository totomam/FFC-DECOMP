#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);
extern void *func_ov003_0214da1c(void *a, void *b, uint32_t c);

uint8_t func_ov003_0214db38(void *self, uint32_t a, uint32_t *out1, uint32_t *out2) {
    uint8_t *base = (uint8_t *)self;
    void *m1 = func_02052d90(*(void **)(base + 0x378), *(uint32_t *)(base + 0x37C));
    void *m2 = func_02052d90(*(void **)(base + 0x368), *(uint32_t *)(base + 0x36C));
    uint8_t *p = (uint8_t *)func_ov003_0214da1c(m1, m2, a);
    *out1 = *(uint16_t *)(p + 0x14);
    *out2 = *(uint16_t *)(p + 0x16);
    return *p;
}
