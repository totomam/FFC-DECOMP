#include "ffc/types.h"

extern void func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov011_021c94bc(void *p);
extern void func_020697ac(void *p, void *q);

void func_ov011_021c95f0(uint8_t *p)
{
    func_0209a76c(*(uint32_t *)(p + 0x3b0) + 4, 5);
    func_ov011_021c94bc(p);
    if (p[0x3b4] != 0) {
        uint32_t idx = *(uint32_t *)(p + 0x3b0);
        func_020697ac(p, *(void **)(p + 0xc4 + (idx << 2)));
    }
}
