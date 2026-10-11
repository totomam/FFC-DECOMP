#include "ffc/types.h"

extern int32_t func_0208cf38(uint32_t a, uint32_t b);
extern void func_0208cdd8(uint32_t a, void *b);
extern int32_t func_0208ce30(uint32_t a, uint32_t b);

int32_t func_0208d850(void *p) {
    int32_t r;
    r = func_0208cf38(1, 2);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(6, p);
    r = func_0208ce30(6, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
