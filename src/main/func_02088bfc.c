#include "ffc/types.h"

extern int32_t func_02087460(void);

uint8_t func_02088bfc(void) {
    if (func_02087460() != 0) {
        return *(uint8_t *)0x2ffe20e;
    }
    return 0;
}
