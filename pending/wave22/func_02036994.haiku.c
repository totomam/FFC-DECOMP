#include "ffc/types.h"

extern int func_020367bc(uint8_t *p);

int func_02036994(uint8_t *p, int i) {
    int flag;
    uint8_t *q;
    if (func_020367bc(p)) {
        flag = 1;
    } else {
        flag = 0;
    }
    q = p + (i << 2) + 0x34;
    if (*q == 1 && flag) {
        return 1;
    }
    return 0;
}
