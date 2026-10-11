#include "ffc/types.h"

int func_ov006_0219b470(uint8_t *p) {
    if (*(uint16_t *)(p + 0x40) != 1 || !(p[0x4b] & 2)) return 0;
    return 1;
}
