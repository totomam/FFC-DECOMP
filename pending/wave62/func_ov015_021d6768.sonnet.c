/* cflags: -nothumb */
#include "ffc/types.h"
extern uint32_t data_ov015_021d79b4;
extern uint32_t data_ov015_021d79b8;
typedef uint32_t (*F)(uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t func_ov015_021d6768(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    F p = (F)((F)(data_ov015_021d79b4 - 0x3200))(a, b, c, 0);
    uint32_t r = p(a, b, c, d);
    ((F)(data_ov015_021d79b8 - 0x3200))(a, b, c, 0);
    return r;
}
