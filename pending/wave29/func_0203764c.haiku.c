#include "ffc/types.h"

extern void func_02035588(uint32_t a, int32_t b);
extern uint32_t data_021395b0;

void func_0203764c(uint32_t a) {
    int32_t i;
    for (i = 15; i >= 0; i--) {
        uint32_t m = 1u << i;
        if ((a & m) && (data_021395b0 & m)) {
            func_02035588(0, i);
            data_021395b0 &= ~m;
        }
    }
}
