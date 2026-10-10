#include "ffc/types.h"

int func_ov004_0214f74c(uint8_t *p, int i) {
    int *q = (int *)(p + (i << 2));
    return *(int *)((uint8_t *)q + 0x178) == 0;
}
