#include "ffc/types.h"

extern void func_02056844(void *p);

void *func_02074650(void *p) {
    uint8_t *q = *(uint8_t **)((uint8_t *)p + 0x14);
    q[0x13] = 0;
    func_02056844(p);
    return p;
}
