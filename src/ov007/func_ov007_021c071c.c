#include "ffc/types.h"

extern int func_ov007_021c062c(void *self);
extern void func_ov007_021c06cc(void *self);

int func_ov007_021c071c(void *self, uint32_t val)
{
    int r;
    *(uint32_t *)((uint8_t *)self + 0x20) = val;
    r = func_ov007_021c062c(self);
    if (r != 0) {
        return r;
    }
    func_ov007_021c06cc(self);
    return 0;
}
