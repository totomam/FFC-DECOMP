#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02158e6c(const uint8_t *text, uint32_t len, uint8_t *buf, int32_t size);
extern void func_ov000_0215ed88(uint8_t c, void *p, uint32_t a, uint32_t b, uint8_t *buf, int32_t n);

void func_ov000_0215db5c(int32_t unused, void *p1, const uint8_t *text)
{
    uint8_t buf[0x200];
    int32_t n;
    uint32_t k = func_02092864(text);

    if (k - 1 == 0) {
        n = 0;
    } else {
        int32_t r0 = func_ov000_02158e6c(text + 1, k - 1, buf, 0x200);
        if (r0 == -1) {
            return;
        }
        if (r0 % 4 != 0) {
            return;
        }
        if (r0 > 0x200) {
            return;
        }
        n = r0 / 4;
    }
    func_ov000_0215ed88(text[0], p1, 0, 0, buf, n);
}
