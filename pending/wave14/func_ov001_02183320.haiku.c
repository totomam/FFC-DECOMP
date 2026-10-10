#include "ffc/types.h"

extern void func_ov001_021832d4(uint32_t arg);

void func_ov001_02183320(uint32_t *p)
{
    if (p[0] == 0xFFFFFFFFu) {
        p[6] = 0xFFFFFFFFu;
    }
    func_ov001_021832d4(p[1]);
}
