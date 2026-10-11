#include "ffc/types.h"

extern uint8_t data_02141510[];
extern void func_ov000_0214b69c(uint32_t a);
extern void func_ov000_02147ab0(uint32_t a);

void func_ov000_02147b7c(uint32_t a)
{
    uint8_t *x = *(uint8_t **)(data_02141510 + 4);
    uint8_t *y = *(uint8_t **)(x + 0xa4);
    if (y != 0) {
        if (y[9] != 0) {
            func_ov000_0214b69c(a);
            return;
        }
        func_ov000_02147ab0(a);
    }
}
