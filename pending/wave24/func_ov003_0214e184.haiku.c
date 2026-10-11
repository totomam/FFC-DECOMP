#include "ffc/types.h"

extern void *func_ov003_021464f4(void *a, uint16_t b);
extern void func_ov003_0215acbc(void *p, uint16_t a, uint16_t b, uint32_t c, uint32_t d, uint16_t e, uint32_t f);
extern void func_ov003_0215aeb0(void *p);

void func_ov003_0214e184(uint8_t *p)
{
    void *r = func_ov003_021464f4(*(void **)(p + 0x14), *(uint16_t *)(p + 0x18));
    if (r) {
        func_ov003_0215acbc(r, *(uint16_t *)(p + 0x1a), *(uint16_t *)(p + 0x1c),
                            *(uint32_t *)(p + 0x20), *(uint32_t *)(p + 0x24),
                            *(uint16_t *)(p + 0x1e), *(uint32_t *)(p + 0x28));
        if (*(uint8_t *)(p + 0x2c)) {
            func_ov003_0215aeb0(r);
        }
    }
}
