#include "ffc/types.h"

extern int32_t func_ov000_0214d1d8(void *fn, void *p, int32_t a);
extern int32_t func_ov000_0214d2ac(void *p);
extern void func_ov000_0214dcc8(void);

int32_t func_ov000_0214dc8c(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0xa0);
    int32_t v = *(int32_t *)(q + 0xf8);
    int32_t r;
    if (v < *(uint16_t *)(q + 0xfc)) {
        return 0;
    }
    r = func_ov000_0214d1d8((void *)func_ov000_0214dcc8, p, 0);
    if (r != 0) {
        return func_ov000_0214d2ac(p);
    }
    return -33;
}
