#include "ffc/types.h"

extern void *func_ov000_02163654(void *object);

uint32_t func_ov000_02161948(void *object) {
    void *p = func_ov000_02163654(object);
    if (p == 0) {
        return 0xff;
    }
    return ((uint8_t *)p)[0x16];
}
