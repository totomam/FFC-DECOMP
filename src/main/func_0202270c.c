#include "ffc/types.h"

int8_t *func_0202270c(int8_t **p, int8_t *buf) {
    int32_t i = 0;
    int32_t k = 0;
    int32_t m = 0;
    int8_t *cur;
    int8_t *t;
    int32_t z;

    if ((*p)[i] == 0) {
        return 0;
    }
    while ((*p)[k] != 13 && (*p)[k] != 10 && (*p)[k] != 0) {
        cur = *p;
        *p = *p + 1;
        buf[i] = cur[m];
        i++;
        if (i == 256) {
            break;
        }
    }
    z = 0;
    buf[i] = z;
    cur = *p;
    if (cur[z] == 13) {
        t = cur + 1;
        *p = t;
        if (cur[1] == 10) {
            *p = t + 1;
        }
    }
    cur = *p;
    if (cur[0] == 10) {
        t = cur + 1;
        *p = t;
        if (cur[1] == 13) {
            *p = t + 1;
        }
    }
    return buf;
}
