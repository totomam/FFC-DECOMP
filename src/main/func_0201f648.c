#include "ffc/types.h"

extern int32_t data_020b8e44;
extern uint32_t func_02015a58(int32_t x);
extern int32_t func_02036314(uint8_t *p);

int32_t func_0201f648(uint8_t *p) {
    int32_t sum = 0;
    uint32_t i = 1;
    if (func_02015a58(data_020b8e44) > 1) {
        do {
            sum += func_02036314(*(uint8_t **)(p + 0x58) + i * 0x60);
            i++;
        } while (i < func_02015a58(data_020b8e44));
    }
    return sum;
}
