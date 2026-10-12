#include "ffc/types.h"

extern int32_t func_ov006_0219c848(void *obj, void *p, uint16_t a, uint16_t t, uint16_t b);
extern void func_ov006_0219bae0(void);
extern uint8_t data_ov006_021ba150[];

uint32_t func_ov006_0219c878(void *p, uint32_t a, uint32_t b) {
    uint8_t *d = data_ov006_021ba150;
    uint8_t *s = *(uint8_t **)(d + 0xc);
    int32_t r;
    uint16_t t;
    uint16_t ua = (uint16_t)a;
    uint16_t ub = (uint16_t)b;

    if (*(uint16_t *)(s + 0x528) == 0 || *(uint16_t *)(s + 0x526) == 1) {
        return 1;
    }
    switch (*(uint16_t *)(s + 0x524)) {
    case 1:
        if (*(uint16_t *)(s + 0x52c) == 0) {
            t = 1000;
        } else {
            t = 0;
        }
        r = func_ov006_0219c848(*(void **)(s + 0x508), p, ua, t, ub);
        if (r == 2) {
            *(*(uint8_t **)(d + 0xc) + 0x50c) = 1;
            return 0;
        }
        return r;
    case 2:
        r = func_ov006_0219c848((void *)func_ov006_0219bae0, p, ua, 0, ub);
        if (r == 2) {
            *(*(uint8_t **)(d + 0xc) + 0x50c) = 1;
            return 0;
        }
        return r;
    default:
        return 1;
    }
}
