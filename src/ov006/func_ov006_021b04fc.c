#include "ffc/types.h"

extern void func_02084b2c(uint8_t *dst, int val, uint32_t n);
extern void func_02084ca4(uint8_t *dst, uint8_t *src, uint32_t n);
extern uint8_t func_02093b18(uint8_t *buf);

void func_ov006_021b04fc(uint8_t *dst, uint8_t *out) {
    uint8_t buf[4];
    int i, j;

    func_02084b2c(buf, 0, 4);
    for (i = 0; i < 4; i++) {
        func_02084ca4(dst + i * 3, buf, 3);
        for (j = 0; j < 3; j++) {
            if (buf[j] != 0) {
                break;
            }
            buf[j] = ' ';
        }
        out[i] = func_02093b18(buf);
    }
}
