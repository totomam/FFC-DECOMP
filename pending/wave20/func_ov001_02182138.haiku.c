#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void);
extern int func_ov000_02168bac(uint32_t a, void *b, uint32_t *c);
extern void func_ov001_02182100(void);

int func_ov001_02182138(uint32_t *p) {
    uint32_t local;
    local = func_ov000_0216591c();
    if (func_ov000_02168bac(p[3], (void *)func_ov001_02182100, &local) == 0) {
        return 1;
    }
    return 0;
}
