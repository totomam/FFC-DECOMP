#include "ffc/types.h"

extern int32_t func_ov000_02152b68(void);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern uint8_t data_ov000_0216e26c[];

int32_t func_ov000_02152838(void *param)
{
    int32_t ret = 0;
    uint32_t v = func_ov000_02152b68();
    if (v >= 0xa && v <= 0x10) {
        uint8_t *obj = *(uint8_t **)(data_ov000_0216e26c + 0xc);
        uint8_t kind = obj[0x17];
        if (kind == 4 || kind == 8) {
            func_02084ca4(obj + 0x18, param, 0xa);
            ret = 1;
        }
    }
    return ret;
}
