#include "ffc/types.h"

extern int32_t func_0200710c(void *a, int32_t b, int32_t c);
extern int32_t func_02006dd8(void *a, int32_t b, int32_t d);
extern int32_t func_02006e74(void *a, int32_t b, int32_t c, int32_t d);

int32_t func_02006f10(void *a, int32_t b, int32_t c, int32_t d) {
    int32_t r;
    if (d < 0) {
        d = 0;
    }
    r = func_0200710c(a, b, c);
    switch (r) {
    case -1:
        return 0;
    case 0:
        return func_02006dd8(a, b, d);
    case 1:
        return func_02006e74(a, b, c, d);
    }
    return 0;
}
