#include "ffc/types.h"

extern int32_t func_0204dc5c(void);
extern int32_t func_0204ab1c(int32_t h, int32_t c, int32_t d, int32_t e, int32_t g);

int32_t func_0204aba4(int32_t unused, int32_t *b, int32_t c, int32_t d, int32_t e, int32_t g)
{
    int32_t h;
    int32_t r;

    h = func_0204dc5c();
    if (h != 0) {
        r = func_0204ab1c(h, c, d, e, g);
    } else {
        return -1001;
    }
    if (r >= 0) {
        return r;
    }
    if (*b != 0) {
        return -1002;
    }
    if (r == -56) {
        return 0;
    }
    return -1001;
}
