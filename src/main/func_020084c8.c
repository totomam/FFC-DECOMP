#include "ffc/types.h"

extern uint8_t data_020b7dec[];
extern void func_02008410(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

void func_020084c8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    func_02008410(data_020b7dec, a, b, c, d, e, f);
}
