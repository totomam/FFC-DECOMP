#include "ffc/types.h"

extern void func_ov002_021c82b0(void *p, uint32_t v);
extern void func_020696f8(void *p);
extern void func_ov002_021b86d8(void *p);

void func_ov002_021c8494(uint8_t *self)
{
    if (*(uint8_t **)(self + 0x9c) != 0) {
        func_ov002_021c82b0(*(uint8_t **)(self + 0x9c) + 0xb8, 0);
        func_020696f8(*(void **)(self + 0x9c));
        func_ov002_021b86d8(*(void **)(self + 0x9c));
        *(uint32_t *)(self + 0x9c) = 0;
    }
}
