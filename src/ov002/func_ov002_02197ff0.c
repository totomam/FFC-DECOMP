#include "ffc/types.h"

extern void func_ov002_021c976c(void *self);

void *func_ov002_02197ff0(void *self) {
    uint32_t *p = (uint32_t *)self;
    p[0x43] = 0;
    p[0x44] = 0;
    p[0x45] = 0;
    func_ov002_021c976c(self);
    return self;
}
