#include "ffc/types.h"

extern void func_0204ac98(uint8_t *dst, const uint8_t *src, int n);
extern int func_0204ac00(int32_t *p0, int a2, uint8_t *base, int size, int zero);

int func_0204bf04(int32_t *p0, uint8_t *base, int a2, int32_t *p3, const uint8_t *src, int len)
{
    int total = len;
    while (len > 0) {
        int n;
        if (*p0 != 0) {
            return -1;
        }
        n = 0x4000 - *p3;
        if (len <= n) {
            n = len;
        }
        func_0204ac98(base + *p3, src, n);
        src += n;
        *p3 += n;
        len -= n;
        if (*p3 == 0x4000) {
            int r = func_0204ac00(p0, a2, base, 0x4000, 0);
            if (r <= 0) {
                return r;
            }
            *p3 -= r;
        }
    }
    return total;
}
