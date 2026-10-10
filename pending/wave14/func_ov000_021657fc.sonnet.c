#include "ffc/types.h"

extern void func_020889a4(uint32_t *p);
extern void func_020889b8(void);

uint32_t func_ov000_021657fc(uint32_t *p)
{
    uint32_t v;

    func_020889a4(p);
    v = *p + 1;
    *p = v;
    func_020889b8();
    return v;
}
