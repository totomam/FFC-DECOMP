#include "ffc/types.h"

extern void func_02035dbc(void *object, uint32_t value);
extern void func_02035dcc(void *object, uint32_t increment);
extern void *func_02017dd8(uint32_t a, uint32_t b);
extern int32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t data_020b8e44;

void func_02036240(uint8_t *obj, int32_t n, int32_t flag0)
{
    int32_t flag = flag0;
    uint8_t *tbl;
    uint8_t *base;
    uint32_t c;
    uint32_t v;
    uint32_t r6;

    if (n > 0x14) {
        n = 0x14;
    }
    base = obj + 4;
    v = 0;
    c = v;
    do {
        func_02035dbc(base + v * 8, c);
        v++;
    } while (v < 4);
    tbl = (uint8_t *)func_02017dd8(data_020b8e44, (uint8_t)*(uint32_t *)(obj + 0x58));
    v = *(uint16_t *)(tbl + *(uint32_t *)(tbl + 8) + (n - 1) * 2);

    if (flag == 0) {
        flag = func_0209a76c((uint32_t)(n * 4), 0x14) + 1;
        if (flag >= 4) {
            flag = 4;
        }
        r6 = func_0209a978(v, (uint32_t)flag);
        if ((uint32_t)flag > 1) {
            for (c = 1; c < (uint32_t)flag; c++) {
                func_02035dcc(obj + 4 + c * 8, r6);
                v -= r6;
            }
        }
        func_02035dcc(obj + 4, v);
    } else {
        r6 = func_0209a76c(v, (uint32_t)flag);
        for (c = 0; (int32_t)c < flag; c++) {
            func_02035dcc(obj + 4 + c * 8, r6);
            v -= r6;
        }
        func_02035dcc(obj + 4, v);
    }
}
