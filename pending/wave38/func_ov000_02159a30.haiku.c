#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];
extern int func_ov000_0215aab4(void *p);
extern int func_ov001_02175f44(void *p, uint32_t a, uint32_t b, uint32_t c);

int func_ov000_02159a30(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *obj = *(uint8_t **)(data_ov000_0217004c + 0xc);

    if (obj == 0 || !func_ov000_0215aab4(obj)) {
        return 0;
    }
    if (a == 0xffffffff) {
        a = *(uint32_t *)(**(uint8_t ***)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 4) + 0x23c);
    }
    if (b == 0) {
        b = (uint32_t)(**(uint8_t ***)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 4) + 0x3b8);
    }
    if (c == 0) {
        c = (uint32_t)(**(uint8_t ***)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 4) + 0x4b8);
    }
    return func_ov001_02175f44(*(void **)(*(uint8_t **)(data_ov000_0217004c + 0xc) + 4), a, b, c);
}
