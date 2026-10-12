#include "ffc/types.h"

extern void func_02093c2c(void *s, uint32_t n);

typedef struct {
    uint8_t flag;
    uint8_t pad;
    uint16_t v;
    uint8_t cnt;
    uint8_t digits[32];
} S;

void func_02093e00(S *s, const uint8_t *p, uint32_t v)
{
    uint32_t i = 0;
    uint8_t c;

    s->v = (uint16_t)v;
    s->flag = (uint8_t)i;
    while (i < 0x20 && *p != 0) {
        c = *p;
        p++;
        s->digits[i] = (uint8_t)(c - 0x30);
        i++;
    }
    s->cnt = (uint8_t)i;
    c = *p;
    if (c == 0 || c < 5) {
        return;
    }
    if (c == 5) {
        const uint8_t *q = p + 1;
        uint8_t r = p[1];
        if (r != 0) {
            do {
                if (r != 0x30) {
                    goto call;
                }
                q++;
                r = *q;
            } while (r != 0);
        }
        if ((s->digits[i - 1] & 1) == 0) {
            return;
        }
    }
call:
    func_02093c2c(s, s->cnt);
}
