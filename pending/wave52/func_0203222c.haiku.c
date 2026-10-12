#include "ffc/types.h"

extern uint32_t data_0213e098;
extern int32_t func_02055054(uint32_t x);
extern long long func_0209a76c(int32_t a, int32_t b);
extern void func_020204e0(int32_t x);
extern void func_02031e84(int32_t *out, void *a, int32_t b, int32_t c);

void func_0203222c(uint8_t *p)
{
    int32_t t = func_02055054(data_0213e098);
    int32_t val = *(int32_t *)(p + 0x20) + t;
    *(int32_t *)(p + 0x20) = val;
    if (val >= 0x24) {
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
        return;
    }
    long long q = func_0209a76c(val, 6);
    int32_t hi = (int32_t)(q >> 32);
    if (hi >= 1 && p[0x24] != 0) {
        uint8_t *s0 = *(uint8_t **)(p + 0x14);
        func_020204e0(*(int32_t *)(s0 + 0xb8));
        p[0x24] = 0;
        return;
    }
    if (hi >= 4 && p[0x24] == 0) {
        int32_t *s = *(int32_t **)(p + 0x14);
        int32_t *d = s + 0x41;
        int32_t *e = s + 0x38;
        int32_t *f = s + 0x3e;
        int32_t arr[2];
        int32_t bb = (e[1] - f[1]) - d[1];
        arr[0] = (e[0] - f[0]) - d[0];
        arr[1] = bb;
        func_02031e84(arr, p + 0x18, s[0x2f], s[0x2e]);
        p[0x24] = 1;
    }
}
