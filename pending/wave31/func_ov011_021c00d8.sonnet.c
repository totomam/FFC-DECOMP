#include "ffc/types.h"

extern uint32_t func_ov006_021adc9c(uint32_t a, void *obj, uint32_t c, uint8_t *out);
extern uint32_t func_020369c0(const void *object, uint32_t index);
extern uint32_t func_020367bc(const void *object, uint32_t index);
extern void func_02036a10(void *object, uint32_t index, uint32_t val, uint32_t flag, uint32_t extra);

void func_ov011_021c00d8(uint32_t a, void *obj, uint32_t c, uint32_t d)
{
    uint8_t tmp;

    if (func_ov006_021adc9c(a, obj, c, &tmp) == 0) {
        return;
    }
    if (func_020369c0(obj, tmp) == 0) {
        func_02036a10(obj, tmp, func_020367bc(obj, tmp), 1, d);
    } else {
        func_02036a10(obj, tmp, func_020367bc(obj, tmp), 0, 0);
    }
}
