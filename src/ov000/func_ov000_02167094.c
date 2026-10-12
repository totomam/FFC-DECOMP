#include "ffc/types.h"

extern uint32_t *func_ov000_02166414(uint32_t a);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint8_t data_ov000_0216b7fc[];

int func_ov000_02167094(uint32_t a) {
    uint32_t *p = func_ov000_02166414(a);
    if (p[3] == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 1;
    }
    if (p[5] || p[8] || p[4] || p[9] || p[6] || p[7] || p[10]) {
        return 0;
    }
    return 1;
}
