#include "ffc/types.h"

extern void func_02074080(uint32_t);
extern void func_0203b720(void);

void func_ov007_021b33dc(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xb8);
    if (v) {
        func_02074080(v);
        return;
    }
    func_0203b720();
}
