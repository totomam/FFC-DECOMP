#include "ffc/types.h"

extern uint32_t data_021395b0;
extern uint32_t data_0209e4e0[];
extern void func_02035588(uint32_t a, int32_t b);

void func_02037680(uint32_t mask) {
    uint32_t i;
    for (i = 0; i < 16; i++) {
        if (mask & (1u << i)) {
            uint32_t v = data_021395b0 & ~data_0209e4e0[i];
            if (v) {
                int32_t j;
                for (j = 15; j >= 0; j--) {
                    if (v & (1u << j)) {
                        func_02035588(0, j);
                        data_021395b0 &= ~(1u << j);
                    }
                }
            }
        }
    }
}
