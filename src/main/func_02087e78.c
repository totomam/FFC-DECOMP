#include "ffc/types.h"

extern int func_02087460(void);

int func_02087e78(uint32_t addr) {
    if (func_02087460()) {
        if (addr >= 0x0D000000u && addr < 0x0E000000u) {
            return 1;
        }
        return 0;
    }
    if (addr >= 0x02400000u && addr < 0x02800000u) {
        return 1;
    }
    return 0;
}
