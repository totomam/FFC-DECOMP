#include "ffc/types.h"

extern int32_t func_020812c8(int32_t x);

int32_t func_0208123c(int32_t x) {
    if (x > 0) {
        uint32_t a = 0x40002b0;
        *(volatile uint16_t *)a = 1;
        a = a + 8;
        *(volatile uint32_t *)a = 0;
        ((volatile uint32_t *)a)[1] = x;
        return func_020812c8(x);
    }
    return 0;
}
