#include "ffc/types.h"

extern uint32_t func_ov000_02152b68(void);
extern int func_ov000_021533fc(void);

int func_ov000_021527cc(void)
{
    uint32_t r = func_ov000_02152b68();
    if (r <= 1) {
        return 0;
    }
    if (r < 7) {
        return 1;
    }
    if (r == 9) {
        return 4;
    }
    if (r < 10) {
        return 2;
    }
    if (r == 11) {
        return 4;
    }
    if (r < 16) {
        return 3;
    }
    if (r == 16) {
        return 5;
    }
    if (r == 17) {
        return 4;
    }
    return func_ov000_021533fc();
}
