#include "ffc/types.h"

void func_02091b30(uint8_t *base, uint32_t nel, uint32_t w, int32_t (*cmp)(void *, void *))
{
    uint32_t i, k, n;
    uint8_t *p, *last, *par, *ch, *a, *b;
    uint8_t t;

    if (nel < 2) return;
    i = (nel >> 1) + 1;
    p = base + w * (i - 1);
    last = base + w * (nel - 1);
    for (;;) {
        if (i > 1) {
            i--;
            p -= w;
        } else {
            b = last; a = p;
            for (n = w; n != 0; n--) { t = *a; *a = *b; *b = t; a++; b++; }
            nel--;
            if (nel == 1) return;
            last -= w;
        }
        k = i;
        par = base + w * (k - 1);
        while (2 * k <= nel) {
            k = 2 * k;
            a = par;
            par = base + w * (k - 1);
            if (k < nel && cmp(par, par + w) < 0) {
                k++;
                par += w;
            }
            if (cmp(a, par) >= 0) break;
            {
                uint32_t m = w;
                uint8_t *b2 = par;
                for (; m != 0; m--) { t = *a; *a = *b2; *b2 = t; a++; b2++; }
            }
        }
    }
}
