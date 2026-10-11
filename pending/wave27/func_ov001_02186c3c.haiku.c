#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *p);
extern void *func_ov000_0216876c(void *p, int32_t i);

int32_t func_ov001_02186c3c(uint8_t *p, int32_t v) {
    int32_t n = func_ov000_02168768(*(void **)(p + 4));
    int32_t i = 0;
    if (n > 0) {
        do {
            int32_t *e = (int32_t *)func_ov000_0216876c(*(void **)(p + 4), i);
            if (v == *e) {
                return i;
            }
            i++;
        } while (i < n);
    }
    return -1;
}
