#include "ffc/types.h"

extern int func_ov000_0214d4ac(void *p);
extern void func_02087498(void *a, uint32_t b, uint8_t c);
extern void func_02087620(void *object);
extern void func_02086dcc(void *a, void *fn, void *b, int c, uint16_t d, uint8_t e);
extern void func_020870a0(void *object);
extern void func_ov000_0214d2d4(void);

int func_ov000_0214d5b4(uint32_t a, void *b, uint8_t *c)
{
    int r7 = func_ov000_0214d4ac(c);
    func_02087498(b, a, c[3]);
    func_02087620((uint8_t *)b + 0xe0);
    func_02086dcc((uint8_t *)b + 0x20, func_ov000_0214d2d4, b, a + r7, *(uint16_t *)c, c[2]);
    func_020870a0((uint8_t *)b + 0x20);
    return a + r7;
}
