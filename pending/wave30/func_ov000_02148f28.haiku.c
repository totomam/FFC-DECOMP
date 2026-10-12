#include "ffc/types.h"

extern void *func_02084b2c(void *, int32_t, uint32_t);
extern int32_t func_ov000_02148c18(void *);
extern void func_02084050(void *, uint32_t);
extern int32_t func_ov000_02149288(void *);
extern int32_t func_ov000_021492d4(void *);
extern int32_t func_ov000_02149100(void *, void *);

int32_t func_ov000_02148f28(char *a)
{
    char *q;
    void *r;

    r = func_02084b2c(a, 0, 0x1000);
    if (func_ov000_02148c18(r) != 0) {
        return -10001;
    }
    q = a + 0xa00;
    func_02084050(q, 0xa001);
    if (func_ov000_02149288(a + 0x600) == 0) {
        return -10001;
    }
    if (func_ov000_021492d4(a) != 0) {
        return func_ov000_02149100(a, q);
    }
    return -10001;
}
