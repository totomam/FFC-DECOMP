#include "ffc/types.h"

extern int32_t func_02088ba8(void);
extern int32_t func_02088c14(void);

int32_t func_0208d304(void) {
    if (func_02088ba8() == 1) {
        if (func_02088c14() == 0) {
            return 1;
        }
    }
    return 0;
}
