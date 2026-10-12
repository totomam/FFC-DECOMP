#include "ffc/types.h"

extern int32_t func_ov000_0216551c(void *, int32_t, int32_t, int32_t);
extern void func_ov001_021874c4(void *);
extern int32_t func_ov001_02187288(void *, int32_t, int32_t, int32_t, int32_t);
extern void func_ov001_02186f1c(void *);

int32_t func_ov001_02187214(uint8_t *p, int32_t a, int32_t b) {
    int32_t n = 1;
    int32_t r;
    int32_t res;
    for (;;) {
        n--;
        r = func_ov000_0216551c(*(void **)(p + 0x6b4), a, b, 0);
        if (r > 0 || n < 0 || *(int32_t *)(p + 0x80) > 0) {
            break;
        }
        func_ov001_021874c4(p);
        res = func_ov001_02187288(p, 0, 0, 2, 0);
        if (res != 0) {
            func_ov001_02186f1c(p);
            return res;
        }
        if (n < 0) {
            break;
        }
    }
    if (r <= 0) {
        return 3;
    }
    return 0;
}
