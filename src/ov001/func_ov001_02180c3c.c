#include "ffc/types.h"

extern int32_t func_ov001_021808cc(void *p);
extern void func_ov001_0218054c(void *p);
extern int32_t func_ov001_02181b2c(void *p);
extern int32_t func_ov001_0217ff48(void *p, int32_t mode, int32_t a, int32_t b);

int32_t func_ov001_02180c3c(void *p, int32_t a, int32_t b)
{
    if (((int32_t *)p)[3] != 1) {
        return func_ov001_021808cc(p) != 0;
    }
    func_ov001_0218054c(p);
    if (func_ov001_02181b2c(p) == 0) {
        return 0;
    }
    return func_ov001_0217ff48(p, 2, a, b) != 0;
}
