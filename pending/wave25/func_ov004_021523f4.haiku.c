#include "ffc/types.h"

extern void func_ov004_02151f10(void *p);
extern void func_ov004_02148680(void *p);
extern void func_ov004_02151f74(void *p);
extern void func_02056db0(void *p);

void *func_ov004_021523f4(void *p) {
    uint8_t *base = (uint8_t *)p;
    uint32_t off = 0x51 << 2;
    func_ov004_02151f10(base + off);
    func_ov004_02148680(base + (off - 0x20));
    func_ov004_02148680(base + (off - 0x2c));
    func_ov004_02151f74(base + (off - 0x38));
    func_02056db0(p);
    return p;
}
