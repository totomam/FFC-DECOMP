#include "ffc/types.h"

extern uint64_t func_02096cf8(uint32_t a, uint32_t b, uint32_t *out);
extern void func_02096d78(uint64_t r, uint32_t c);

void func_02094870(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t tmp;
    uint64_t r = func_02096cf8(a, b, &tmp);
    tmp += c;
    func_02096d78(r, tmp);
}
