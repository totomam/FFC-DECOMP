#include "ffc/types.h"

extern int func_0206cb98(uint32_t v);
extern int func_0206cb74(uint32_t v);
extern void func_ov007_021ae3e8(void *e, uint32_t a, uint32_t b, void *c);

void func_ov007_021a2544(uint8_t *self) {
    if (func_0206cb98(*(uint32_t *)(self + 0x88)) == 0) {
        int idx = func_0206cb74(*(uint32_t *)(self + 0x88));
        uint8_t *base = *(uint8_t **)(self + 0x8c);
        uint8_t *e = base + (1 - idx) * 0x2c;
        func_ov007_021ae3e8(e, *(uint32_t *)(e + 0xc), *(uint32_t *)(e + 0x10), e + 0x14);
    }
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2u;
}
