#include "ffc/types.h"

extern int32_t func_ov001_02176200(int32_t a, int32_t b, int32_t c, int32_t d);

int32_t func_ov001_021758b4(int32_t a, int32_t b, int32_t c, int32_t d) {
    if (*(int32_t *)0x0217098c != 1) {
        return 2;
    }
    if (a == 0) {
        return 2;
    }
    return func_ov001_02176200(a, b, c, d);
}
