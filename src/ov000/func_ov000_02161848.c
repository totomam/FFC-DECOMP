#include "ffc/types.h"

extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849e0(uint32_t a, void *p, uint32_t n);
extern uint32_t data_ov000_0217022c[];

void func_ov000_02161848(void)
{
    int i;
    for (i = 0; i < 0x9a; i++) {
        uint32_t *e = (uint32_t *)((uint8_t *)data_ov000_0217022c + i * 12);
        if (e[1] != 0) {
            func_ov000_021591a8(4, e[1], 0);
        }
    }
    func_020849e0(0, data_ov000_0217022c, 0x738);
}
