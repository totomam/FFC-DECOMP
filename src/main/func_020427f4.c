#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t func_02017fe4(uint32_t x);
extern uint32_t func_0201c044(uint32_t x, uint32_t y);
extern void func_020424f4(uint32_t a, uint32_t b);

void func_020427f4(uint32_t a)
{
    uint32_t i = 1;

    if (func_02017fe4(data_020b8e44) > 1) {
        do {
            if (func_0201c044(data_020b93b8, i) != 0) {
                func_020424f4(a, i);
            }
            i++;
        } while (i < func_02017fe4(data_020b8e44));
    }
}
