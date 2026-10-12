#include "ffc/types.h"

extern void func_ov001_0218085c(uint8_t *p, int off, int v);
extern int func_ov001_021803b0(void *a, uint8_t *p, int n);
extern const uint8_t data_ov001_02191a24[];

int func_ov001_02181aa0(void *a0, int a1, int a2)
{
    uint8_t buf[12];
    uint8_t *p;
    uint8_t *q;
    const uint8_t *d;
    int n = 0;
    int r;

    if (*(int *)(*(int *)((uint8_t *)a0 + 8) + 0x40) == 2) {
        *(uint16_t *)buf = 7;
        p = buf + 2;
        p[0] = buf[0];
        n += 2;
        p[1] = buf[1];
    }
    p = buf + 2;
    d = data_ov001_02191a24;
    q = p + n;
    q[0] = d[0];
    q[1] = d[1];
    p[n + 2] = 0x65;
    func_ov001_0218085c(p, n + 3, a1);
    n += 5;
    if (a1 != a2) {
        func_ov001_0218085c(p, n, a2);
        n += 2;
    }
    r = func_ov001_021803b0(a0, p, n);
    if (r == 0) {
        return 0;
    }
    return 1;
}
