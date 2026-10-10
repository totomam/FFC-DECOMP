#include "ffc/types.h"

void func_0208d228(void) {
    uint16_t *p = (uint16_t *)0x2ffff96;
    uint16_t v = *p;
    if (v & 1) {
        *p = v & 0xfffe;
    }
}
