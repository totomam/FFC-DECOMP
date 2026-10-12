#include "ffc/types.h"

extern uint32_t func_ov006_021a0204(void);
extern void func_020871d8(uint32_t x);
extern uint32_t func_ov006_021a0460(void);
extern void func_ov000_0214f140(void);
extern uint32_t data_ov006_021bb170[];

void func_ov006_021a06f4(void) {
    uint32_t r5 = 1;
    if (data_ov006_021bb170[8] != 0) {
        if (func_ov006_021a0204() != 0) {
            uint32_t r6 = 0;
            uint32_t r4 = 0;
            uint32_t n = 10;
            while (r5 != 0) {
                uint32_t r;
                func_020871d8(n);
                r = func_ov006_021a0460();
                while (r != 0) {
                    switch (r) {
                    case 4:
                    case 5:
                        break;
                    case 14:
                        r5 = r4;
                        break;
                    default:
                        r5 = r6;
                        break;
                    }
                    r = func_ov006_021a0460();
                }
            }
        }
        data_ov006_021bb170[8] = 0;
    }
    if (data_ov006_021bb170[9] != 0) {
        data_ov006_021bb170[9] = 0;
        func_ov000_0214f140();
    }
}
