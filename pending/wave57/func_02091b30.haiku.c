#include "ffc/types.h"

void func_02091b30(uint8_t *base, uint32_t nel, uint32_t w, int32_t (*cmp)(void *, void *))
{
    uint32_t i, k, c, n;
    uint8_t *p, *last, *par, *ch;
    uint8_t t;

    if (nel < 2) {
        return;
    }
    i = (nel >> 1) + 1;
    p = base + (i - 1) * w;
    last = base + (nel - 1) * w;
    for (;;) {
        if (i > 1) {
            i--;
            p -= w;
        } else {
            n = w;
            if (n != 0) {
                do {
                    t = *p;
                    *p = *last;
                    *last = t;
                    p++;
                    last++;
                    n--;
                } while (n != 0);
            }
            nel--;
            if (nel == 1) {
                return;
            }
            last -= w;
        }
        k = i;
        while (2 * k <= nel) {
            c = 2 * k;
            par = base + (k - 1) * w;
            ch = base + (c - 1) * w;
            if (c < nel && cmp(ch, ch + w) < 0) {
                c++;
                ch += w;
            }
            if (cmp(par, ch) >= 0) {
                break;
            }
            n = w;
            if (n != 0) {
                do {
                    t = *par;
                    *par = *ch;
                    *ch = t;
                    par++;
                    ch++;
                    n--;
                } while (n != 0);
            }
            k = c;
        }
    }
}
