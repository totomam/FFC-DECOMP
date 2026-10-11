#include "ffc/types.h"

extern int32_t func_0202eba4(uint8_t *p);
extern int32_t func_0202b2dc(uint32_t v);

int32_t func_0202ec24(uint8_t *p) {
    if (func_0202eba4(p) != 0) {
        return 1;
    }
    {
        uint32_t v = *(uint32_t *)(p + 0x84);
        if (v != 0) {
            return func_0202b2dc(v);
        }
    }
    return 1;
}
