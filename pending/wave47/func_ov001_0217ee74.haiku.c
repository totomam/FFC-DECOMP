#include "ffc/types.h"

extern int func_ov001_0217ef50(void *ctx, int a, void *b);
extern int func_ov001_021788f0(void *ctx, int a, int b);
extern uint8_t data_ov001_02191894[];

int func_ov001_0217ee74(void *ctx, int8_t *src, int32_t *poff, int8_t *d1, int8_t *d2)
{
    int8_t *s = src;
    int8_t *ip;
    int8_t *p;
    int8_t c;
    int8_t *o1 = d1;
    int8_t *o2 = d2;
    int n;

    ip = s + *poff;
    if (*ip != '\\') {
        func_ov001_0217ef50(ctx, 1, data_ov001_02191894);
        func_ov001_021788f0(ctx, 3, 1);
        return 3;
    }
    p = ip + 2;
    c = ip[1];
    n = 0;
    while (c != '\\') {
        if (c == 0 || n == 0x1ff) {
            func_ov001_0217ef50(ctx, 1, data_ov001_02191894);
            func_ov001_021788f0(ctx, 3, 1);
            return 3;
        }
        *o1++ = c;
        n++;
        c = *p++;
    }
    *o1 = 0;
    n = 0;
    for (;;) {
        c = *p++;
        if (c == '\\' || c == 0) {
            break;
        }
        if (n == 0x1ff) {
            func_ov001_0217ef50(ctx, 1, data_ov001_02191894);
            func_ov001_021788f0(ctx, 3, 1);
            return 3;
        }
        *o2++ = c;
        n++;
    }
    *o2 = 0;
    *poff += (int32_t)(p - ip) - 1;
    return 0;
}
