#include "ffc/types.h"

extern uint8_t data_ov000_02170064[];

int func_ov000_0215bf78(void) {
    int r = 1;
    uint8_t *p = *(uint8_t **)(data_ov000_02170064 + 4);
    if (p[0x365] != 2 && p[0x35d] == 0) {
        r = 0;
    }
    return r;
}
