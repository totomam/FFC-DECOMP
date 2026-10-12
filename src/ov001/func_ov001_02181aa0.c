#include "ffc/types.h"

extern void func_ov001_0218085c(uint8_t *p, int off, int v);
extern int func_ov001_021803b0(void *a, uint8_t *p, int n);
extern const uint8_t data_ov001_02191a24[];

int func_ov001_02181aa0(void *a0, int a1, int a2)
{
    uint16_t h;
    uint8_t buf[10];
    uint8_t *p = buf;
    int n = 0;
    int r;

    if (*(int *)(*(int *)((uint8_t *)a0 + 8) + 0x40) == 2) {
        uint16_t v = 7;
        uint16_t *hp = &h;
        uint8_t *s;
        *hp = v;
        s = (uint8_t *)&h;
        p[0] = s[0];
        n += 2;
        p[1] = s[1];
    }
    {
        const uint8_t *t = data_ov001_02191a24;
        uint8_t *q = p + n;
        q[0] = t[0];
        q[1] = t[1];
    }
    p[n + 2] = 0x65;
    func_ov001_0218085c(p, n + 3, a1);
    n += 5;
    if (a1 != a2) {
        func_ov001_0218085c(p, n, a2);
        n += 2;
    }
    r = func_ov001_021803b0(a0, p, n);
    if (r == 0) return 0;
    return 1;
}
