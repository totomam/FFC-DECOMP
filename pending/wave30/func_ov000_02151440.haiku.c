#include "ffc/types.h"

extern uint8_t *func_ov000_0215022c(uint16_t *p);
extern void func_ov000_0214fc54(void);
extern void func_ov000_021503a0(uint8_t *p);

void func_ov000_02151440(uint16_t *p) {
    uint8_t *o = func_ov000_0215022c(p);
    int32_t r;
    void (*fn)(int32_t);

    if (p[0] == 0x12) {
        *(uint16_t *)(o + 0x24) = p[1];
        if (p[1] == 0) {
            func_ov000_0214fc54();
        }
        switch (*(uint16_t *)(o + 0x24)) {
        case 0:
            r = 0;
            break;
        case 1:
        default:
            r = -5;
            break;
        }
        fn = *(void (**)(int32_t))(o + 0x2c);
        *(uint32_t *)(o + 0x2c) = 0;
        func_ov000_021503a0(o + 0x0c);
        fn(r);
    }
}
