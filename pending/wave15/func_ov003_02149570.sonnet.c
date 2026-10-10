#include "ffc/types.h"
extern void func_020816d4(uint32_t a, uint32_t b);
void func_ov003_02149570(uint32_t a, ...)
{
    uint32_t *ap = &a;
    uint32_t pad[2]; uint32_t *q = pad; if (q == ap) return;
    func_020816d4(ap[2], ap[1]);
}
