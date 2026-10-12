#include "ffc/types.h"

typedef struct {
    uint8_t p0, p1, p2, p3, q0, q1, q2, q3;
} Spec;

typedef struct {
    uint32_t lo;
    uint32_t hi;
} Pair;

extern Pair func_0209a978(uint32_t a, uint32_t b);

char *func_020907f0(int32_t val, char *end, Spec s, int32_t width, int32_t prec)
{
    char *p;
    int32_t wid = prec;
    int32_t alt = s.p3;
    int32_t conv = s.q1;
    int32_t pre = s.p1;
    int32_t sign = 0;
    int32_t base;
    int32_t digits = 0;
    int32_t dig;

    p = end - 1;
    *p = 0;
    if (val == 0 && wid == 0 && (alt == 0 || conv != 'o')) {
        return p;
    }

    if (conv == 'd' || conv == 'i') {
        base = 10;
        if (val < 0) {
            val = -val;
            sign = 1;
        }
    } else if (conv == 'o') {
        base = 8;
        pre = 0;
    } else if (conv == 'u') {
        base = 10;
        pre = 0;
    } else if (conv == 'x' || conv == 'X') {
        base = 16;
        pre = 0;
    } else {
        base = 10;
    }

    do {
        dig = (int32_t)func_0209a978((uint32_t)val, (uint32_t)base).hi;
        if (dig < 10) {
            *--p = (char)(dig + '0');
        } else if (conv == 'x') {
            *--p = (char)(dig + 0x57);
        } else {
            *--p = (char)(dig + 0x37);
        }
        digits++;
        val = (int32_t)func_0209a978((uint32_t)val, (uint32_t)base).lo;
    } while (val != 0);

    if (base == 8 && alt != 0 && *p != '0') {
        *--p = '0';
        digits++;
    }

    if (s.p0 == 2) {
        wid = width;
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
