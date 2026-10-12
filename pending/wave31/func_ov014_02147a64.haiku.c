#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    volatile uint32_t f4;
    uint32_t f8;
} S;

extern S data_ov014_02155b20;
extern uint32_t func_ov014_02147ac4(void);
extern void func_ov014_02145ad0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02081b40(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov014_02147a64(volatile uint32_t *p)
{
    uint32_t x;
    volatile uint32_t *reg;

    while (data_ov014_02155b20.f4 == 0) {
    }
    while (p[1] != 1) {
    }
    p[1] = 0;
    x = func_ov014_02147ac4();
    func_ov014_02145ad0(data_ov014_02155b20.f8, x, 0x100, 0);
    data_ov014_02155b20.f4 = 0;
    reg = (volatile uint32_t *)0x04000000;
    *reg = (*reg & 0xffffe0ff) | (0xf << 8);
    func_02081b40(0x04000050, 2, 0x3f, 0x10, 4);
}
