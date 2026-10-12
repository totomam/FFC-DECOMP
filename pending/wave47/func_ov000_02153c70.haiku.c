#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t);
extern int func_ov000_0214f964(void);
extern void func_ov000_02153e18(int);
extern void func_ov000_0214f67c(void);
extern void func_ov000_0214f804(void);
extern void func_ov000_0214f898(void);
extern void func_ov000_02152b80(int);

int func_ov000_02153c70(void)
{
    uint8_t *p = func_ov000_02152ae4(0x10);
    uint32_t r4 = 9;
    int arg;

    switch (func_ov000_0214f964()) {
    case 3: {
        uint32_t idx = 0x14be;
        uint8_t b = p[idx - 2];
        uint32_t flag = ((uint32_t)b << 25) >> 31;
        r4 = p[idx];
        if (flag == 1) {
            uint8_t v = p[idx + 5];
            uint8_t *w = p + (v << 2);
            r4 = 7;
            w[0xbf4] = 0;
        } else {
            if (r4 >= 3 && r4 <= 5) {
                func_ov000_02153e18(r4);
            }
        }
        break;
    }
    case 6:
        func_ov000_0214f67c();
        break;
    case 9:
        func_ov000_0214f804();
        break;
    case 12:
        func_ov000_0214f898();
        arg = 4;
        goto tail;
    case 11:
        arg = 0;
    tail:
        func_ov000_02152b80(arg);
        r4 = 0x11;
        break;
    default:
        break;
    }
    return r4;
}
