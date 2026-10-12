#include "ffc/types.h"

extern void func_ov000_02147794(void *p);
extern void *func_ov000_0214785c(void *p);
extern void *func_ov000_02147810(void *p);
extern void func_ov000_021477b4(void *p);
extern void func_ov000_02147870(void *p);
extern void func_ov000_0214ddec(void);

int func_ov000_0214d3b0(uint32_t *obj) {
    uint8_t *s = (uint8_t *)obj[1];
    void *p;

    func_ov000_02147794(s);
    p = *(void **)(s + 0xa4);
    switch ((int8_t)s[0xaf]) {
    case 0:
    case 4:
        func_ov000_02147810(func_ov000_0214785c((uint8_t *)p + 0x20));
        break;
    case 1:
        func_ov000_021477b4(func_ov000_02147810(p));
        func_ov000_02147870((void *)func_ov000_0214ddec);
        break;
    case 2:
        func_ov000_021477b4(p);
        break;
    default:
        break;
    }
    *(uint16_t *)(s + 0xac) = 1;
    return 0;
}
