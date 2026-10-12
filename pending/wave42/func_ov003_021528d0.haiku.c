#include "ffc/types.h"

extern uint32_t func_ov003_021464f4(uint32_t obj, int flag);
extern uint32_t func_ov003_02155b40(uint32_t obj);
extern void func_ov003_02155b44(uint32_t *out, uint32_t obj);
extern void func_ov003_0215043c(uint32_t obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov003_02151788(uint32_t obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                uint32_t e, uint32_t f);

void func_ov003_021528d0(uint32_t self)
{
    uint32_t tmp;
    uint32_t x;
    uint32_t r4;
    uint32_t r7;

    if (*(uint32_t *)(self + 0xa0) != 0) {
        x = func_ov003_021464f4(*(uint32_t *)(self + 0x9c), 1);
        if (x != 0) {
            r4 = func_ov003_02155b40(x);
            r7 = func_ov003_02155b40(x);
            func_ov003_02155b44(&tmp, x);
            func_ov003_0215043c(*(uint32_t *)(self + 0xa0), *(uint32_t *)(r4 + 8),
                                *(uint32_t *)(r4 + 12), *(uint16_t *)(r7 + 0x10), tmp);
        }
    }
    if (*(uint32_t *)(self + 0xa4) != 0) {
        x = func_ov003_021464f4(*(uint32_t *)(self + 0x9c), 1);
        if (x != 0) {
            r4 = func_ov003_02155b40(x);
            func_ov003_02151788(*(uint32_t *)(self + 0xa4), *(uint32_t *)(r4 + 8),
                                *(uint32_t *)(r4 + 12), *(uint32_t *)(self + 0xa8),
                                *(uint32_t *)(self + 0xac), *(uint32_t *)(self + 0xb0),
                                *(uint32_t *)(self + 0xb4));
        }
    }
}
