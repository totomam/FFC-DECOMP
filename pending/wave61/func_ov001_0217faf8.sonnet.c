#include "ffc/types.h"
extern uint32_t func_ov001_0217f9bc(void *a);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_0217fa40(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov001_021919e8[];
void func_ov001_0217faf8(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f) {
    uint32_t buf[0x10];
    volatile uint32_t le = e, ld = d;
    uint32_t r = func_ov001_0217f9bc(a);
    func_02086ad4(buf, (uint32_t)data_ov001_021919e8, b, r);
    func_ov001_0217fa40(a, buf, c, ld, le, f);
}
