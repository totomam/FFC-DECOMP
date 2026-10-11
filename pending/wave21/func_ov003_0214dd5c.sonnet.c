#include "ffc/types.h"

extern void func_ov003_0214dd80(uint8_t *p, uint32_t v);

int func_ov003_0214dd5c(uint8_t *p, uint32_t v)
{
    if (p[0x410] != 0) {
        if (*(uint32_t *)(p + 0x40C) >= v) {
            func_ov003_0214dd80(p, v);
            return 1;
        }
    } else {
        return 1;
    }
    return 0;
}
