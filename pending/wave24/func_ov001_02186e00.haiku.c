#include "ffc/types.h"

extern void *func_ov001_02185d80(void *a);
extern void *func_ov000_02168b44(void *obj, uint32_t *key);
extern void func_ov000_02168b00(void *obj, uint32_t *key);

void func_ov001_02186e00(void *a, uint32_t v)
{
    uint32_t local[2];
    uint32_t *p;
    local[0] = v;
    p = func_ov000_02168b44(func_ov001_02185d80(a), local);
    if (p != 0) {
        p[1] = p[1] - 1;
        if (p[1] == 0) {
            func_ov000_02168b00(func_ov001_02185d80(a), local);
        }
    }
}
