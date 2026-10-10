#include "ffc/types.h"

extern uint32_t data_ov000_0216e088[];

void func_ov000_0214f02c(uint32_t p) {
    uint32_t a = p;
    if (a) {
        a -= 4;
        void (*fn)(uint32_t, uint32_t, uint32_t) = (void (*)(uint32_t, uint32_t, uint32_t))data_ov000_0216e088[1];
        fn(0, a, *(uint32_t *)a);
    }
}
