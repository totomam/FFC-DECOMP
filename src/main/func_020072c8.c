#include "ffc/types.h"

extern int32_t func_02007298(void);

int32_t func_020072c8(void) {
    if (func_02007298() == -1) {
        return 0;
    }
    return 1;
}
