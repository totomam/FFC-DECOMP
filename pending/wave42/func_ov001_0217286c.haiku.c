#include "ffc/types.h"

extern uint32_t *func_ov001_02172654(void *p);
extern int func_02092a04(uint32_t v, void *d, uint32_t n);
extern uint8_t data_ov001_0218f4e0[];
extern void func_ov001_02172e54(void);
extern void func_ov001_02172f2c(void);
extern void func_ov001_02173088(void);
extern void func_ov001_02173080(void);
extern void func_ov001_02173084(void);

int func_ov001_0217286c(void *p, uint32_t mode)
{
    uint32_t *s = func_ov001_02172654(p);
    uint32_t cur;
    if (s == 0) {
        return 0;
    }
    if (mode == 5) {
        mode = 4;
    }
    cur = s[0x66];
    if (cur == mode) {
        return 1;
    }
    if (s[0x65] != 0 && cur != mode) {
        return 0;
    }
    if (mode == 0) {
        if (!func_02092a04(s[5], data_ov001_0218f4e0, 8)) {
            return 0;
        }
    }
    s[0x66] = mode;
    if (mode == 0) {
        s[0x65] = 0;
        return 1;
    }
    s[0x65] = 0;
    s[0x6d] = (uint32_t)func_ov001_02172e54;
    s[0x6f] = (uint32_t)func_ov001_02172f2c;
    s[0x6e] = (uint32_t)func_ov001_02173088;
    s[0x70] = (uint32_t)func_ov001_02173080;
    s[0x71] = (uint32_t)func_ov001_02173084;
    s[0x67] = 0;
    s[0x68] = 0;
    s[0x69] = 0;
    s[0x6a] = 1;
    s[0x6b] = 0;
    s[0x6c] = 0;
    s[0x72] = 1;
    return 1;
}
