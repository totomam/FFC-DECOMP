#include "ffc/types.h"

extern int32_t func_0201c218(int32_t a, int32_t b);
extern int32_t func_0201c9ac(int32_t a, int32_t b);

int32_t func_0201c1f0(int32_t a, int32_t mode, int32_t b)
{
    if (mode != 1) {
        if (mode != 2) {
            return 0;
        }
        return func_0201c218(a, b);
    }
    return func_0201c9ac(a, b);
}
