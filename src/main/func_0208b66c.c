#include "ffc/types.h"

extern int32_t func_0208baf4(void);
extern int32_t func_0208b4d4(int32_t a, uint16_t b, int32_t c);

int32_t func_0208b66c(uint32_t p) {
    if (func_0208baf4()) {
        return func_0208b4d4(0x10, (uint16_t)p, 0);
    }
    return 0;
}
