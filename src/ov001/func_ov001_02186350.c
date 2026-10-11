#include "ffc/types.h"

extern int32_t func_0209704c(int32_t a, int32_t b);

int32_t func_ov001_02186350(int32_t *a, int32_t *b) {
    int32_t x = *a;
    int32_t y;
    if (x == 0 || (y = *b) == 0) {
        return 1;
    }
    return func_0209704c(x, y);
}
