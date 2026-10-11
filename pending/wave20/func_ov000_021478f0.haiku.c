#include "ffc/types.h"

extern uint8_t data_02141510[];
extern int func_ov000_0214b5b8(void);
extern int func_ov000_02147884(void);

int func_ov000_021478f0(void) {
    uint8_t *base = *(uint8_t **)(data_02141510 + 4);
    uint8_t *p = *(uint8_t **)(base + 0xa4);
    if (p != 0) {
        if (p[9] != 0) {
            return func_ov000_0214b5b8();
        }
        return func_ov000_02147884();
    }
    return 1;
}
