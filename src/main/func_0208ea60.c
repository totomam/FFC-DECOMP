#include "ffc/types.h"

extern int32_t func_0208cf0c(void *p);
extern void func_0208cdd8(int32_t a, void *p);
extern int32_t func_0208ce30(int32_t a, int32_t b, void *c, int32_t d, int32_t e, int32_t f);

int32_t func_0208ea60(void *a, void *b, int32_t c, int32_t d, uint16_t e)
{
    int32_t r;
    r = func_0208cf0c(a);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(0x1d, a);
    r = func_0208ce30(0x1d, 4, b, c, d, (int32_t)e);
    if (r != 0) {
        return r;
    }
    return 2;
}
