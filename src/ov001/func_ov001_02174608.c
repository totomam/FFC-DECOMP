#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const void *d);
extern void func_ov001_02171e6c(uint32_t *s, uint32_t a, uint32_t b);
extern void func_ov000_02165914(void);
extern uint32_t func_ov001_02174514(uint32_t *s);
extern void func_ov001_0217286c(uint32_t p, uint32_t v);
extern uint8_t data_ov001_0218fd8c[];
extern uint8_t data_ov001_0218fda4[];
extern uint8_t data_ov001_0218fde4[];
extern uint8_t data_ov001_0218fe24[];
extern uint8_t data_ov001_0218fe40[];

void func_ov001_02174608(uint32_t *s) {
    uint8_t *b;
    uint32_t r;

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218fd8c);
    func_ov001_02171e6c(s, 0, 0);
    func_ov000_02165914();

    if (func_ov001_02174514(s) == 0) {
        s[0x49] = 1;
        s[0x10] = 3;
        return;
    }

    if (s[10] == 1 && s[0x66] == 0) {
        func_ov000_021652a8(8, 0, 2, data_ov001_0218fda4);
        func_ov001_0217286c(s[1], 5);
    } else if (s[10] != 1 && s[0x66] != 0) {
        func_ov001_0217286c(s[1], 0);
        func_ov000_021652a8(8, 0, 2, data_ov001_0218fde4);
    }

    if (s[10] == 1 && s[0x67] == 0) {
        func_ov000_021652a8(8, 3, 0xf, data_ov001_0218fe24);
        b = (uint8_t *)s;
        r = ((uint32_t (*)(uint32_t *, uint8_t *))(*(uint32_t *)(b + 0x1b4)))(s, b + 0x194);
        if (r == 3) {
            func_ov000_021652a8(8, 3, 2, data_ov001_0218fe40);
            s[0x49] = 1;
            s[0x10] = 0x11;
            return;
        }
    }

    s[4] = 1;
    func_ov001_02171e6c(s, 0, 0);
}
