#include "ffc/types.h"

extern int func_ov006_021a3300(char *dst, int8_t c);

int func_ov006_021a3334(char *dst, const int8_t *src) {
    char *p = dst;
    int i = 0;
    do {
        p += func_ov006_021a3300(p, *src++);
        if (i < 5) {
            *p++ = ':';
        }
        i++;
    } while (i < 6);
    *p = 0;
    return p - dst;
}
