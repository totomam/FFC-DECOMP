#include "ffc/types.h"

extern uint32_t func_ov006_0219f078(uint32_t x);
extern int32_t func_ov006_0219e0e8(void *p);
extern uint32_t func_ov006_0219de90(uint32_t a, void *b, int32_t *c, uint32_t d);
extern uint32_t func_ov006_0219df6c(uint32_t a, void *b, int32_t *c, uint32_t d);
extern uint32_t func_ov006_0219e044(uint32_t a, void *b, int32_t *c, uint32_t d);

uint32_t func_ov006_0219ddf0(uint32_t r0, uint8_t *r1, int32_t *r2, uint32_t r3)
{
    uint8_t *r6 = r1;
    uint8_t *r7;
    uint32_t t;

    t = func_ov006_0219f078(*(uint16_t *)(r6 + 0xc));
    r7 = r6 + 0xc;
    if (t < 1) {
        (*r2)++;
        return r0;
    }
    if (*(uint8_t *)(r7 + 0xf) != 0x11) {
        (*r2)++;
        return r0;
    }
    if (func_ov006_0219e0e8(r6 + 0xc) > 0) {
        (*r2)++;
        return r0;
    }
    t = func_ov006_0219f078(*(uint16_t *)(r6 + 0x12));
    if (t == 0x1010) {
        r0 = func_ov006_0219de90(r0, r6, r2, r3);
    } else if (t == 0x2010) {
        r0 = func_ov006_0219df6c(r0, r6, r2, r3);
    } else if (t == 0x3010) {
        r0 = func_ov006_0219e044(r0, r6, r2, r3);
    }
    return r0;
}
