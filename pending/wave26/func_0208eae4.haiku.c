#include "ffc/types.h"

extern int32_t func_0208cf38(int32_t a, int32_t b, int32_t c);
extern void func_0208cdd8(int32_t a, uint32_t b);
extern int32_t func_0208ce30(int32_t a, int32_t b, uint32_t c);

int32_t func_0208eae4(uint32_t a, uint32_t b) {
    int32_t r;
    r = func_0208cf38(2, 7, 9);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(0x21, a);
    r = func_0208ce30(0x21, 1, b);
    if (r != 0) {
        return r;
    }
    return 2;
}
