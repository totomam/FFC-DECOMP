#include "ffc/types.h"
extern void func_ov006_0219aadc(uint8_t *s, uint32_t *t, uint8_t *o, uint32_t *v);
extern void func_02084ca4(void *d, void *s, uint32_t n);
extern uint32_t data_ov006_021b57d8[];
void func_ov006_0219aa8c(uint8_t *out, uint8_t *src) {
    uint32_t v = 0x8b << 18;
    uint32_t *t = data_ov006_021b57d8;
    uint8_t *p;
    int i;
    ((uint32_t *)out)[0] = *(uint32_t *)(src + 0x24);
    ((uint32_t *)out)[1] = *(uint32_t *)(src + 0x34);
    p = out + 0xc;
    for (i = 0; i < 3; i++) {
        func_ov006_0219aadc(src, t, p, &v);
        p += 0x10;
        t++;
    }
    func_02084ca4(src + 0x160, out + 0x3c, 0x88);
}
