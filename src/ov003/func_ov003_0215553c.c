#include "ffc/types.h"

extern void func_ov003_021552a4(void *a, void *b, uint32_t c);
extern void func_ov003_02155418(void *a, uint32_t b, void *c, void *d);

void func_ov003_0215553c(void *p, void *q, uint32_t flag)
{
    if (flag) {
        func_ov003_021552a4(p, q, flag);
    }
    func_ov003_02155418(p, 0, (uint8_t *)p + 0xc, q);
}
