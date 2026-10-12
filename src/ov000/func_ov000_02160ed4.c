#include "ffc/types.h"

extern void *func_ov000_02163350(void);
extern void *func_ov000_0215b73c(void *p, uint32_t x);
extern void func_ov001_021807d0(void *p);
extern void func_ov000_02163568(void *p);

int func_ov000_02160ed4(void *a0) {
    uint8_t *b;
    void *r;
    int ret;

    b = (uint8_t *)func_ov000_02163350();
    *(void **)(b + 0x680) = a0;
    r = func_ov000_0215b73c(a0, 0);
    if (r != 0) {
        b = (uint8_t *)func_ov000_02163350();
        b[0x629] = 1;
        func_ov001_021807d0(*(void **)r);
        b = (uint8_t *)func_ov000_02163350();
        b[0x629] = 0;
        func_ov000_02163568(a0);
        ret = 1;
    } else {
        func_ov000_02163568(a0);
        ret = 0;
    }
    return ret;
}
