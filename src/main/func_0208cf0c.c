#include "ffc/types.h"

extern int func_0208cef8(void);
extern void func_02087874(void *p, uint32_t x);
extern uint32_t data_02143580[];

int func_0208cf0c(void) {
    int r = func_0208cef8();
    if (r == 0) {
        func_02087874((void *)((uint32_t *)data_02143580[1])[1], 2);
        uint16_t *q = (uint16_t *)((uint32_t *)data_02143580[1])[1];
        if (*q <= 1) {
            return 3;
        }
        return 0;
    }
    return r;
}
