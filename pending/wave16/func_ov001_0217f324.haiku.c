#include "ffc/types.h"

extern void *data_ov001_02194c28;
extern void func_ov000_02168b44(void *h, void *arg);

void func_ov001_0217f324(void **p, uint32_t v) {
    uint32_t local[5];
    if (p == 0) {
        p = (void **)data_ov001_02194c28;
    }
    local[0] = v;
    func_ov000_02168b44(*p, local);
}
