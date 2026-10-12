#include "ffc/types.h"

extern uint8_t data_02141510[];
extern void *func_ov000_021467a4(void *a, uint32_t b, void *c);

void *func_ov000_02146820(void *a, uint32_t b) {
    void *r4;
    uint8_t *obj = *(uint8_t **)(data_02141510 + 8);
    while (obj != 0) {
        r4 = *(void **)(obj + 0xa4);
        if (r4 != 0 && *(uint32_t *)r4 != 0) {
            if (func_ov000_021467a4(a, b, r4) != 0) {
                return r4;
            }
        }
        obj = *(uint8_t **)(obj + 0x68);
    }
    return 0;
}
