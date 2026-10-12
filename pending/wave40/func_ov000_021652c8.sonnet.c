#include "ffc/types.h"

extern void *func_020903cc();
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov000_0216b380[];
extern uint16_t data_020a6254[];

void func_ov000_021652c8(const uint8_t *s, char *dst, uint32_t n) {
    char *w = dst + 0x29;
    uint32_t flag = n & 1;
    uint32_t c;
    uint32_t t;

    func_020903cc(dst, 0x20, 0x40);
    if (n-- != 0) {
        do {
            c = *s++;
            func_02086ad4(dst, (uint32_t)data_ov000_0216b380, c);
            if (c >= 0x80) t = 0; else t = data_020a6254[c] & 0x10;
            if (t) {
                *w = c;
            } else {
                *w = '.';
            }
            w++;
            dst += 2;
            if ((n & 1) == flag) {
                *dst++ = ' ';
            }
        } while (n-- != 0);
    }
    *dst = ' ';
    *w = 0;
}
