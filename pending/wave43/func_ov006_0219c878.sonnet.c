#include "ffc/types.h"

extern int32_t func_ov006_0219c848(void *obj, void *p, uint16_t a, uint16_t t, uint16_t b);
extern void func_ov006_0219bae0(void);
extern uint8_t data_ov006_021ba150[];

#define S (*(uint8_t **)(data_ov006_021ba150 + 0xc))
#define H(o) (*(uint16_t *)(S + (o)))

uint32_t func_ov006_0219c878(void *p, uint32_t a, uint32_t b) {
    uint16_t ua = a;
    uint16_t ub = b;
    uint16_t t;
    int32_t r;
    if (H(0x528) == 0 || H(0x526) == 1) return 1;
    switch (H(0x524)) {
    case 1:
        t = H(0x52c) == 0 ? 1000 : 0;
        r = func_ov006_0219c848(*(void **)(S + 0x508), p, ua, t, ub);
        if (r == 2) S[0x50c] = 1;
        if (r == 2) return 0;
        return r;
    case 2:
        r = func_ov006_0219c848((void *)func_ov006_0219bae0, p, ua, 0, ub);
        if (r == 2) S[0x50c] = 1;
        if (r == 2) return 0;
        return r;
    }
    return 1;
}
