#include "ffc/types.h"

extern uint32_t func_ov000_021682d0(void *a, void *b, uint32_t c);
extern uint8_t data_ov007_021c9068[];

int func_ov007_021c0880(uint32_t *s) {
    if (func_ov000_021682d0((void *)s[7], data_ov007_021c9068, s[3]) == 0) {
        return 5;
    }
    return 0;
}
