#include "ffc/types.h"

int func_ov006_021acd70(void) {
    int32_t v = *(volatile uint16_t *)0x02ffffa8 & 0x8000;
    v >>= 15;
    if (v) {
        return 1;
    }
    return 0;
}
