#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_ov001_0218e9b4(uint32_t a, uint32_t b);

void func_ov007_021b1004(uint8_t *a)
{
    uint8_t *p = a + 0x48;
    uint32_t flag = p[0x12];
    uint8_t *q = p + 0x1c;
    uint32_t r4;
    volatile uint32_t tmp[2];
    (void)tmp;

    if (flag != 0) {
        func_0208763c(q);
    }
    r4 = (*(uint32_t *)(p + 0x14) == 0);
    if (flag != 0) {
        func_02087678(q);
    }
    if (r4 != 0) {
        *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffU) | 2;
    } else {
        func_ov001_0218e9b4(*(uint32_t *)(a + 0x88), *(uint32_t *)(a + 0x80));
    }
}
