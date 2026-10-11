#include "ffc/types.h"

extern void func_ov006_021a4d14(int32_t a, int32_t b);
extern uint8_t *data_ov006_021bc6fc;

void func_ov006_021a4954(int32_t v) {
    uint8_t *base;
    int8_t *p;
    if (v == *(int8_t *)(data_ov006_021bc6fc + 0x11f)) {
        return;
    }
    func_ov006_021a4d14(v, 1);
    p = (int8_t *)data_ov006_021bc6fc;
    func_ov006_021a4d14(p[0x11f], 0);
    ((int8_t *)data_ov006_021bc6fc)[0x11f] = (int8_t)v;
}
