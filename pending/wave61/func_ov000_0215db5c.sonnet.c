#include "ffc/types.h"
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02158e6c(const uint8_t *a, uint32_t b, uint8_t *c, int32_t d);
extern void func_ov000_0215ed88(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *e, int32_t f);
void func_ov000_0215db5c(uint32_t a, uint32_t b, const uint8_t *text) {
    uint8_t buf[0x200];
    int32_t cnt;
    uint32_t len = func_02092864(text);
    uint32_t m = len - 1;
    if (m == 0) {
        cnt = 0;
    } else {
        int32_t n = func_ov000_02158e6c(text + 1, m, buf, 0x200);
        if (n == -1) return;
        if (n % 4 != 0) return;
        if (n > 0x200) return;
        cnt = n / 4;
    }
    func_ov000_0215ed88(text[0], b, 0, 0, buf, cnt);
}
