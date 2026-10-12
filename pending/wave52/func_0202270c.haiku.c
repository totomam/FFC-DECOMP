#include "ffc/types.h"

int8_t *func_0202270c(int8_t **p, int8_t *buf) {
    uint32_t i;
    uint32_t j;
    int8_t *cur;

    i = 0;
    if ((*p)[i] == 0) {
        return 0;
    }
    j = 0;
    i = 0;
    for (;;) {
        if ((*p)[j] == 13 || (*p)[j] == 10 || (*p)[j] == 0) {
            break;
        }
        cur = *p;
        *p = *p + 1;
        buf[i] = cur[j];
        i++;
        if (i == 256) {
            break;
        }
    }
    buf[i] = 0;
    cur = *p;
    if (cur[0] == 13) {
        *p = cur + 1;
        if (cur[1] == 10) {
            *p = cur + 2;
        }
    }
    cur = *p;
    if (cur[0] == 10) {
        *p = cur + 1;
        if (cur[1] == 13) {
            *p = cur + 2;
        }
    }
    return buf;
}
