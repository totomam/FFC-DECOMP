#include "ffc/types.h"

extern uint32_t func_02035ff4(void *object);
extern void *func_02017dd8(void *obj);
extern uint32_t func_020361f0(void *object);
extern void *data_020b8e44;

uint32_t func_0203608c(void *obj)
{
    uint32_t flag;
    uint8_t *tbl;
    uint32_t v;
    uint32_t i;

    if (func_02035ff4(obj) == 0) {
        return 0;
    }
    flag = *(uint32_t *)((uint8_t *)obj + 0x58);
    if ((uint8_t)flag == 0) {
        return 0;
    }
    tbl = (uint8_t *)func_02017dd8(data_020b8e44);
    v = func_020361f0(obj);
    for (i = 0; i < 0x14; i++) {
        uint16_t *arr = (uint16_t *)(tbl + *(uint32_t *)(tbl + 8));
        if (v < arr[i]) {
            return i;
        }
    }
    return 0x14;
}
