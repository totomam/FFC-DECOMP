#include "ffc/types.h"

extern void func_0207f4bc(void *p, uint32_t a, uint32_t b);

void func_0207f550(void *unused, uint32_t *p, uint32_t v, uint32_t *q)
{
    uint32_t *s;
    uint32_t a;
    uint32_t old;

    s = (uint32_t *)p[1];
    a = s[2] - s[3];
    old = *q;
    if (old > a) {
        *q = a;
    }
    p[0xc] = v;
    p[0xd] = old;
    p[0xe] = *q;
    func_0207f4bc(p, 0, 0);
}
