#include "ffc/types.h"

extern void func_0202b228(void *obj, uint32_t val, uint32_t x);

void func_ov003_02155bfc(void *self, uint8_t v, uint32_t x)
{
    uint8_t *b = (uint8_t *)self;
    *(uint8_t *)(b + 0x342) = v;
    if (*(void **)(b + 0x110) != 0) {
        func_0202b228(*(void **)(b + 0x110), *(uint8_t *)(b + 0x342), x);
    }
    if (*(void **)(b + 0x114) != 0) {
        func_0202b228(*(void **)(b + 0x114), *(uint8_t *)(b + 0x342), x);
    }
    if (*(void **)(b + 0x118) != 0) {
        func_0202b228(*(void **)(b + 0x118), *(uint8_t *)(b + 0x342), x);
    }
    if (*(void **)(b + 0x11c) != 0) {
        func_0202b228(*(void **)(b + 0x11c), *(uint8_t *)(b + 0x342), x);
    }
    if (*(void **)(b + 0x120) != 0) {
        func_0202b228(*(void **)(b + 0x120),
                      (*(uint8_t *)(b + 0x344) != 0) ? 0 : *(uint8_t *)(b + 0x342),
                      x);
    }
}
