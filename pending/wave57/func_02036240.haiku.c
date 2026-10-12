#include "ffc/types.h"

extern void func_02035dbc(void *object, uint32_t value);
extern void func_02035dcc(void *object, uint32_t increment);
extern void *func_02017dd8(uint32_t a, uint32_t b);
extern int32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t data_020b8e44;

void func_02036240(uint8_t *obj, int32_t n, int32_t flag)
{
    uint8_t *tbl;
    uint8_t *arr;
    uint32_t i;
    uint32_t r4;
    uint32_t r6;

    if (n > 0x14) {
        n = 0x14;
    }
    for (i = 0; i < 4; i++) {
        func_02035dbc(obj + 4 + i * 8, 0);
    }
    tbl = (uint8_t *)func_02017dd8(data_020b8e44, (uint8_t)*(uint32_t *)(obj + 0x58));
    r4 = *(uint16_t *)(tbl + *(uint32_t *)(tbl + 8) + (n - 1) * 2);

    if (flag == 0) {
        flag = func_0209a76c((uint32_t)(n * 4), 0x14) + 1;
        if (flag >= 4) {
            flag = 4;
        }
        r6 = func_0209a978(r4, (uint32_t)flag);
        if (flag > 1) {
            arr = obj + 4;
            for (i = 1; i < (uint32_t)flag; i++) {
                func_02035dcc(arr + i * 8, r6);
                r4 -= r6;
            }
        }
        func_02035dcc(obj + 4, r4);
    } else {
        r6 = func_0209a76c(r4, (uint32_t)flag);
        if (flag > 0) {
            arr = obj + 4;
            for (i = 0; i < (uint32_t)flag; i++) {
                func_02035dcc(arr + i * 8, r6);
                r4 -= r6;
            }
        }
        func_02035dcc(obj + 4, r4);
    }
}
