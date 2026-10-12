#include "ffc/types.h"

extern uint8_t data_ov003_0217bab8[];
extern void func_0206047c(uint32_t a);
extern void func_02060e88(uint32_t a, uint32_t b);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern void func_02059698(uint32_t a, uint32_t b);
extern void func_ov003_02148fac(void *a);
extern void func_02056db0(void *p);

void *func_ov003_02176900(void *p) {
    uint8_t *s = (uint8_t *)p;
    int32_t k;
    *(uint8_t **)s = data_ov003_0217bab8;
    func_0206047c(*(uint32_t *)(*(uint8_t **)(s + 0xa0) + 0x20));
    func_02060e88(*(uint32_t *)(*(uint8_t **)(s + 0xa0) + 0x24), 2);
    func_02060ea4(*(uint32_t *)(*(uint8_t **)(s + 0xa0) + 0x24), 0x10);
    func_02059698(*(uint32_t *)(*(uint8_t **)(s + 0xa0) + 0x14), *(uint32_t *)(s + 0x84));
    k = 0x85;
    k <<= 2;
    *(uint32_t *)(*(uint8_t **)(*(uint8_t **)(s + 0x80) + k)) = 0;
    k -= 0x8c;
    {
        uint8_t *o = *(uint8_t **)(*(uint8_t **)(s + 0x80) + k);
        *(uint32_t *)(o + 0xc) &= ~0xffu;
    }
    func_ov003_02148fac(*(void **)(s + 0x80));
    func_02056db0(p);
    return p;
}
