#include "ffc/types.h"

extern int func_02092a04(uint8_t *p, void *data, uint32_t n);
extern void func_ov001_0217f5ec(uint8_t *p, uint32_t off);
extern void func_ov001_0217f65c(uint8_t *p, uint32_t off);
extern void func_ov001_0217f6c0(uint8_t *p, uint32_t off);
extern void func_ov001_0217f760(uint8_t *p, uint32_t off);
extern uint8_t data_ov001_021919b8[];
extern uint8_t data_ov001_021919c4[];
extern uint8_t data_ov001_021919d0[];
extern uint8_t data_ov001_021919dc[];

void func_ov001_0217f7cc(uint8_t *p, uint32_t off)
{
    p[off] = 0;
    if (func_02092a04(p, data_ov001_021919b8, 8) == 0) {
        func_ov001_0217f5ec(p, off);
        return;
    }
    if (func_02092a04(p, data_ov001_021919c4, 9) == 0) {
        func_ov001_0217f65c(p, off);
        return;
    }
    if (func_02092a04(p, data_ov001_021919c4, 9) == 0) {
        func_ov001_0217f65c(p, off);
        return;
    }
    if (func_02092a04(p, data_ov001_021919d0, 8) == 0) {
        func_ov001_0217f6c0(p, off);
        return;
    }
    if (func_02092a04(p, data_ov001_021919dc, 8) == 0) {
        func_ov001_0217f760(p, off);
    }
}
