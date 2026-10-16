#include "ffc/types.h"
extern int32_t f1(void *a);
extern uint8_t *f2(void *a);
int32_t func_ov001_02183108(void *a) {
    int32_t r = f1(a);
    if (r == -1) {
        uint8_t *p = f2(a);
        if (p == 0) return 0;
        return ***(int32_t ***)(p + 0xc);
    }
    return r;
}
