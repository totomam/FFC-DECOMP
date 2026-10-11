#include "ffc/types.h"

extern int func_ov006_021a3300(char *dst, int8_t c);

int func_ov006_021a3334(char *dst, const int8_t *src) {
    char *p = dst;
    int i;
    for (i = 0; i < 6; i++) {
        int8_t c = *src++;
        char *q = p + func_ov006_021a3300(p, c);
        if (i < 5) {
            *q++ = ':';
        }
        p = q;
    }
    *p = 0;
    return p - dst;
}
