#include "ffc/types.h"

extern int func_ov001_0217ef6c(void *a, void *b);
extern int func_ov001_0217a9b4(void *a);
extern uint32_t data_ov001_02190100[];

int func_ov001_02175b28(void *p) {
    uint32_t *r5;
    uint32_t r4;

    if (p == 0 || (r5 = *(uint32_t **)p) == 0) {
        return 2;
    }
    if ((r4 = r5[0x42]) != 0) {
        return 0;
    }
    if (r5[0x7d] == 4) {
        func_ov001_0217ef6c(p, data_ov001_02190100);
        return 2;
    }
    return func_ov001_0217a9b4(p);
}
