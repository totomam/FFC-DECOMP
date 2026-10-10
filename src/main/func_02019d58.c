#include "ffc/types.h"

extern uint32_t data_020b8df0;

void func_02019d58(void *unused, uint32_t *p1, uint32_t *p2) {
    uint32_t *base = &data_020b8df0;
    *p1 = base[5];
    *p2 = base[11];
}
