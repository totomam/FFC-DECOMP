#include "ffc/types.h"

extern int func_02087460(void);
extern int func_02088ba8(void);
extern int func_02088c14(void);

int func_ov000_02152e1c(void)
{
    if (func_02087460()) {
        if (func_02088ba8() == 1) {
            if (func_02088c14() == 0) {
                return 1;
            }
        }
        return 0;
    }
    return 1;
}
