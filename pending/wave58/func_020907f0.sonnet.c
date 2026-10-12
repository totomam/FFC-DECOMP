#include "ffc/types.h"

typedef struct {
    uint8_t p0, p1, p2, p3, q0, q1, q2, q3;
} Spec;

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);

char *func_020907f0(int32_t val, char *end, Spec s, int32_t width, int32_t prec)
{
    char *p = end - 1;
    int32_t base;
    int32_t sign;
    int32_t wid;
    int32_t pre;
    int32_t w;
    int32_t conv;
    int32_t alt;
    int32_t digits;
    int32_t dig;

    wid = prec;
    alt = s.p3;
    conv = s.q1;
    w = width;
    pre = s.p1;
    sign = 0;
    digits = 0;
    *p = 0;
    if (val == 0 && wid == 0 && (alt == 0 || conv != 'o')) {
        return p;
    }

    switch (conv) {
    case 'd':
    case 'i':
        base = 10;
        if (val < 0) {
            if ((int64_t)val != (int64_t)0x8000000000000000ULL)
                val = -val;
            sign = 1;
        }
        break;
    case 'o':
        base = 8;
        pre = 0;
        break;
    case 'u':
        base = 10;
        pre = 0;
        break;
    case 'x':
    case 'X':
        base = 16;
        pre = 0;
        break;
    }

    do {
        dig = (int32_t)(func_0209a978((uint32_t)val, (uint32_t)base) >> 32);
        val = (int32_t)func_0209a978((uint32_t)val, (uint32_t)base);
        if (dig < 10) {
            *--p = (char)(dig + '0');
        } else if (conv == 'x') {
            *--p = (char)(dig + 0x57);
        } else {
            *--p = (char)(dig + 0x37);
        }
        digits++;
    } while (val != 0);

    if (base == 8 && alt != 0 && *p != '0') {
        *--p = '0';
        digits++;
    }

    if (s.p0 == 2) {
        wid = w;
        if (sign != 0 || pre != 0) {
            wid--;
        }
        if (base == 16 && alt != 0) {
            wid -= 2;
        }
    }

    if ((int32_t)((end - p) + wid) > 0x1fd) {
        return 0;
    }

    while (digits < wid) {
        *--p = '0';
        digits++;
    }

    if (base == 16 && alt != 0) {
        p[-1] = (char)conv;
        p -= 2;
        *p = '0';
    }

    if (sign != 0) {
        *--p = '-';
    } else if (pre == 1) {
        *--p = '+';
    } else if (pre == 2) {
        *--p = ' ';
    }

    return p;
}
