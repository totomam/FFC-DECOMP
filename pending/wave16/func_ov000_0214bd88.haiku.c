#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);

void func_ov000_0214bd88(void *p)
{
    uint32_t *s;

    func_02084b2c(p, 0, 0x58);
    s = (uint32_t *)p;
    s[0] = 0x67452301;
    s[1] = 0xefcdab89;
    s[2] = 0x98badcfe;
    s[3] = 0x10325476;
}
