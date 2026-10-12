#include "ffc/types.h"

extern int32_t func_0208cf0c(int32_t a);
extern void func_0208cdd8(int32_t a, int32_t b);
extern int32_t func_0208ce30(int32_t a, int32_t b, int32_t c);

int32_t func_0208ea2c(int32_t a, int32_t b) {
    int32_t r;
    r = func_0208cf0c(a);
    if (r != 0) {
        return r;
    }
    if (b != 0 && b != 1) {
        return 6;
    }
    func_0208cdd8(0x19, a);
    r = func_0208ce30(0x19, 1, b);
    if (r != 0) {
        return r;
    }
    return 2;
}
