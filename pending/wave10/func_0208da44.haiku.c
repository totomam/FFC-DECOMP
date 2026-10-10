#include "ffc/types.h"

extern int32_t func_0208cf38(int32_t a, int32_t b);
extern void func_0208cdd8(int32_t a, void *b);
extern int32_t func_0208ce30(int32_t a, int32_t b);

int32_t func_0208da44(void *p)
{
    int32_t r;

    r = func_0208cf38(1, 7);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(9, p);
    r = func_0208ce30(9, 0);
    if (r != 0) {
        return r;
    }
    return 2;
}
