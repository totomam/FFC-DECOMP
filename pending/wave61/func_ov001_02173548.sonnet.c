#include "ffc/types.h"
extern void *func_ov000_021653d4(int n);
extern void func_ov000_021653f4(void *p);
extern void *func_ov001_021734f4(void);
extern void *func_021686f4(int a, int b, void *c);
uint32_t *func_ov001_02173548(void)
{
    uint32_t n = 0x1c;
    uint32_t *p = (uint32_t *)func_ov000_021653d4(n);
    uint8_t *q;
    uint32_t *r;
    if (p == 0) return 0;
    q = (uint8_t *)p;
    do { *q++ = 0; } while (--n != 0);
    p[6] = 1;
    r = (uint32_t *)n;
    p[0] = (uint32_t)func_021686f4(0x18, 0, (void *)func_ov001_021734f4);
    if (p[0] == 0) { func_ov000_021653f4(p); return r; }
    return p;
}
