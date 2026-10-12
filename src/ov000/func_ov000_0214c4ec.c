#include "ffc/types.h"

extern void func_ov000_0214beb4(void *dst, void *src, uint32_t n);
extern void func_ov000_0214c46c(void *dst, void *src, uint32_t n);
extern uint8_t data_ov000_021699f4[];

void func_ov000_0214c4ec(uint8_t *a, uint8_t *b) {
    uint32_t v;
    int32_t idx;
    uint32_t r;

    func_ov000_0214beb4(b, a + 0x14, 8);
    v = *(uint32_t *)(a + 0x18);
    idx = (v >> 3) & 0x3f;
    if (idx < 0x38) {
        r = 0x38 - idx;
    } else {
        r = 0x78 - idx;
    }
    func_ov000_0214c46c(a, data_ov000_021699f4, r);
    func_ov000_0214c46c(a, b, 8);
    func_ov000_0214beb4(b, a, 0x14);
}
