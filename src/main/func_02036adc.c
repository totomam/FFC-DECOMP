#include "ffc/types.h"

extern uint32_t func_020367bc(const void *object, uint32_t index);
extern uint32_t func_020369c0(const void *object, uint32_t index);
extern uint8_t func_02036820(const void *object, uint32_t index);
extern void func_02036a10(const void *object, uint32_t index, uint32_t a, uint32_t b, uint8_t c);

void func_02036adc(const void *obj, uint32_t x, uint32_t y)
{
    uint32_t a = func_020367bc(obj, x);
    uint32_t b = func_020369c0(obj, x);
    uint8_t c = func_02036820(obj, x);
    uint32_t d = func_020367bc(obj, y);
    uint32_t e = func_020369c0(obj, y);
    uint8_t f = func_02036820(obj, y);
    func_02036a10(obj, x, d, e, f);
    func_02036a10(obj, y, a, b, c);
}
