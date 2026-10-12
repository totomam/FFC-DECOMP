#include "ffc/types.h"

extern uint32_t data_0213e240[];

int func_020797e8(void) {
    uint32_t mask = 1;
    int i;
    for (i = 0; i < 8; i++) {
        if (!(data_0213e240[1] & mask)) {
            data_0213e240[1] |= mask;
            return i;
        }
        mask <<= 1;
    }
    return -1;
}
