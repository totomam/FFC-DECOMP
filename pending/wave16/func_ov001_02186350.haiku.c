#include "ffc/types.h"

extern int32_t func_0209704c(int32_t a, int32_t b);

int32_t func_ov001_02186350(int32_t *a, int32_t *b) {
    if (*a != 0) {
        if (*b == 0) {
            return 1;
        }
        return func_0209704c(*a, *b);
    }
    return 1;
}
