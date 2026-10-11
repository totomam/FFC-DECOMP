#include "ffc/types.h"

extern int32_t func_02087460(void);

int32_t func_02088bbc(void) {
    if (func_02087460() != 0) {
        uint32_t v = **(uint32_t **)0x2fffdfc;
        if ((v >> 24) & 1) {
            return 1;
        }
        return 0;
    }
    return 0;
}
