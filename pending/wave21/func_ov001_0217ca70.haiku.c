#include "ffc/types.h"

extern int func_ov000_02168bac(uint32_t a, uint32_t b, uint32_t *c);
extern void func_ov001_0217ca5c(void);

int func_ov001_0217ca70(uint32_t *p, uint32_t q, uint32_t r) {
    uint32_t args[3];
    uint32_t base = *p;
    args[0] = (uint32_t)p;
    args[1] = q;
    args[2] = r;
    if (func_ov000_02168bac(*(uint32_t *)(base + 0x5c8), (uint32_t)func_ov001_0217ca5c, args) != 0) {
        return 0;
    }
    return 1;
}
