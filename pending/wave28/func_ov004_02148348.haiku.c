#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

void func_ov004_02148348(void *a)
{
    uint8_t *r5 = *(uint8_t **)((uint8_t *)a + 0x14);
    if (r5[0x8c] != 0) {
        uint8_t *s = r5 + 0x48;
        int f = s[0x12];
        void *r6 = s + 0x1c;
        if (f != 0) {
            func_0208763c(r6);
        }
        int ok = (*(uint32_t *)(s + 0x14) == 0);
        if (f != 0) {
            func_02087678(r6);
        }
        if (ok) {
            uint32_t *w = (uint32_t *)((uint8_t *)a + 0xc);
            *w = (*w & 0xffffff00u) | 2u;
        }
    }
}
