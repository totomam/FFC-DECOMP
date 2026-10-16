/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int32_t func_ov000_0214ee04(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
int32_t func_ov006_021a0bb8(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e) {
    int32_t r = func_ov000_0214ee04(a, d, e, 0, b);
    if (r < 0) return ~3;
    return r;
}
