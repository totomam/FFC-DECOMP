#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021653f4(void *p);
extern void *func_ov000_021686f4(uint32_t a, uint32_t b, void *fn);
extern void func_ov001_021734f4(void);

uint32_t func_ov001_02173548(void)
{
    uint32_t n = 0x1c;
    uint8_t *p = func_ov000_021653d4(0x1c);
    uint8_t *q;
    void *r;

    if (p == 0) {
        return 0;
    }
    q = p;
    do {
        *q++ = 0;
        n--;
    } while (n != 0);
    *(uint32_t *)(p + 0x18) = 1;
    r = func_ov000_021686f4(0x18, 0, (void *)func_ov001_021734f4);
    *(void **)p = r;
    if (r == 0) {
        func_ov000_021653f4(p);
        return n;
    }
    return (uint32_t)p;
}
