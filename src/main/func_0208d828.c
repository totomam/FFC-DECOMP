#include "ffc/types.h"

extern int32_t func_0208cf38(int32_t a, int32_t b);
extern void func_0208cdd8(int32_t a, void *b);
extern int32_t func_0208ce30(int32_t a, int32_t b);

int32_t func_0208d828(void *p)
{
    int32_t r;

    r = func_0208cf38(1, 1);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(5, p);
    r = func_0208ce30(5, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
