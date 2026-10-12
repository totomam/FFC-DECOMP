#include "ffc/types.h"

typedef struct {
    uint8_t sign;
    uint8_t pad1;
    int16_t exp;
    uint8_t len;
    uint8_t d[32];
} Num;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02093c2c(Num *out, uint32_t len);

void func_02093cfc(Num *out, Num *a, Num *b)
{
    uint8_t buf[0x40];
    int m;
    int off;
    int s;
    int cnt;
    uint32_t sum;
    uint32_t carry = 0;
    uint8_t *end;
    uint8_t *p;
    uint8_t *pa;
    uint8_t *pb;
    int k;

    m = a->len + b->len - 1;
    end = buf + m + 1;
    p = end;
    out->sign = 0;

    while (m > 0) {
        sum = carry;
        s = b->len - 1;
        off = m - s - 1;
        if (off < 0) {
            off = 0;
            s = m - 1;
        }
        pa = a->d + off;
        pb = b->d + s;
        cnt = s + 1;
        if (cnt > a->len - off) {
            cnt = a->len - off;
        }
        while (cnt > 0) {
            sum += (*pa) * (*pb);
            pa++;
            pb--;
            cnt--;
        }
        p--;
        *p = (uint8_t)(func_0209a978(sum, 10) >> 32);
        carry = (uint32_t)func_0209a978(sum, 10);
        m--;
    }

    out->exp = a->exp + b->exp;
    if (carry != 0) {
        p--;
        *p = (uint8_t)carry;
        out->exp = out->exp + 1;
    }

    k = 0;
    while (k < 0x20 && p < end) {
        out->d[k] = *p;
        p++;
        k++;
    }
    out->len = (uint8_t)k;

    if (p < end && p[0] >= 5) {
        if (p[0] != 5) {
            goto do_round;
        }
        {
            uint8_t *q;
            for (q = p + 1; q < end; q++) {
                if (*q != 0) {
                    goto do_round;
                }
            }
            if (!(p[-1] & 1)) {
                return;
            }
        }
do_round:
        func_02093c2c(out, out->len);
    }
}
