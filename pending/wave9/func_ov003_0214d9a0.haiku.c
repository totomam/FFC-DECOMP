#include "ffc/types.h"

extern void func_0203b75c(uint32_t arg);
extern void func_ov003_02163ed8(uint32_t arg);

void func_ov003_0214d9a0(uint8_t *p) {
    uint32_t *slot = (uint32_t *)(p + 0x398);
    uint32_t v = *slot;

    if (v == 0) {
        func_0203b75c(0);
        return;
    }
    func_ov003_02163ed8(v);
    *slot = 0;
}
