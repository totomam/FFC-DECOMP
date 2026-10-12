#include "ffc/types.h"

extern int32_t func_0204aba4(void *obj, void *a, void *b, int8_t *p, int32_t x, int32_t y);

int32_t func_0204bf80(void *obj, void *a, void *b) {
    int8_t buf[2];
    int32_t i;
    int32_t sum = 0;
    int32_t r;

    buf[0] = 0;
    buf[1] = 0;
    i = 0;
    while (!(buf[i & 1] == 13 && buf[(i - 1) & 1] == 10)) {
        r = func_0204aba4(obj, a, b, &buf[i & 1], 1, 0);
        if (r <= 0) {
            return r;
        }
        sum += r;
        i++;
    }
    return sum;
}
