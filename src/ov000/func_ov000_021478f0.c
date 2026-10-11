#include "ffc/types.h"

extern uint8_t data_02141510[];
extern int func_ov000_0214b5b8(void *obj);
extern int func_ov000_02147884(void *obj);

int func_ov000_021478f0(void) {
    uint8_t *obj = *(uint8_t **)(data_02141510 + 4);
    obj = *(uint8_t **)(obj + 0xa4);
    if (obj != 0) {
        if (obj[9] != 0) {
            return func_ov000_0214b5b8(obj);
        }
        return func_ov000_02147884(obj);
    }
    return 1;
}
