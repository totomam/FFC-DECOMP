#include "ffc/types.h"

extern int32_t func_0208bb1c(uint32_t *p);
extern void func_0208bb08(uint32_t v);

void func_ov006_021b55b8(void)
{
    uint32_t v;
    if (func_0208bb1c(&v) != 0) {
        return;
    }
    if (v == 0xf) {
        return;
    }
    func_0208bb08(0xf);
}
