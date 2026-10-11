#include "ffc/types.h"

extern void *func_02084b2c(void *p, uint32_t v, uint32_t n);
extern int32_t func_ov000_02148c18(void *p);
extern void func_02084050(void *p, uint32_t v);
extern int32_t func_ov000_02149288(void *p);
extern int32_t func_ov000_02148f80(void *p, void *q);

int32_t func_ov000_02148ee0(void *p)
{
    uint8_t *b = (uint8_t *)p;
    void *r = func_02084b2c(p, 0, 0x700);
    if (func_ov000_02148c18(r) != 0) {
        return -10001;
    }
    func_02084050(b + 0x400, 0xa001);
    if (func_ov000_02149288(p) != 0) {
        return func_ov000_02148f80(p, b + 0x400);
    }
    return -10001;
}
