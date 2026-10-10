#include "ffc/types.h"

extern void func_0209a76c(void *a, int b);
extern void func_ov011_021c1248(void *p);
extern void func_020697ac(void *p, uint32_t v);

void func_ov011_021c13dc(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t off = 0x2c4;
    uint32_t *q;
    uint32_t v;
    func_0209a76c((void *)(*(uint32_t *)(p + off) + 4), 5);
    func_ov011_021c1248(p);
    if (*(p + off + 4) != 0) {
        q = (uint32_t *)(p + (*(uint32_t *)(p + off) << 2));
        v = *(uint32_t *)((uint8_t *)q + (off - 0x24));
        *(uint32_t *)(p + off + 0x78) = v;
        func_020697ac(p, v);
    }
}
