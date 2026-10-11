#include "ffc/types.h"

extern void func_ov003_02178b9c(uint8_t *p, uint32_t x);
extern void func_ov003_02178ac4(uint8_t *p, uint32_t x);
extern uint8_t data_0209dea8;

void func_ov003_02178bfc(uint8_t *p, uint32_t x) {
    if (p[0xc6] == 0) {
        func_ov003_02178b9c(p, x);
        func_ov003_02178ac4(p, x);
        if (p[0xc4] >= data_0209dea8) {
            p[0xc6] = 1;
        }
    }
}
