#include "ffc/types.h"

extern void *func_020903cc();
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov000_0216b380[];
extern uint16_t data_020a6254[];

void func_ov000_021652c8(const uint8_t *s, char *dst, uint32_t n) {
    char *p = dst;
    char *w = dst + 0x29;
    uint32_t flag = n & 1;
    uint8_t c;

    func_020903cc(dst, 0x20, 0x40);
    if (n-- != 0) {
        do {
            c = *s++;
            func_02086ad4(p, (uint32_t)data_ov000_0216b380, c);
            if (c < 0x80 && (data_020a6254[c] & 0x10)) {
                *w = c;
            } else {
                *w = '.';
            }
            w++;
            if ((n & 1) == flag) {
                p[2] = ' ';
                p += 3;
            } else {
                p += 2;
            }
        } while (n-- != 0);
    }
    *p = ' ';
    *w = 0;
}
