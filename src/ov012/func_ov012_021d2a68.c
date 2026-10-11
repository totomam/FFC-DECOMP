#include "ffc/types.h"

extern uint32_t data_ov012_021d321c[];
extern uint32_t data_ov012_021d3220[];

uint32_t func_ov012_021d2a68(uint32_t a0) {
    uint32_t *base = data_ov012_021d321c;
    uint32_t i = 0;
    int m = (int)i - 1;
    for (; i < 6; i++) {
        uint32_t key = base[i * 2];
        if (a0 == key || (int)key == m) {
            return data_ov012_021d3220[i * 2];
        }
    }
    return 1;
}
