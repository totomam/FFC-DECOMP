#include "ffc/types.h"

extern void *func_0204db34(void *p);
extern void func_02087058(void *p);

void func_0204db7c(void *p) {
    uint8_t *q = (uint8_t *)func_0204db34(p);
    ((uint32_t *)p)[3] = 0;
    func_02087058(q + 0x1c);
}
