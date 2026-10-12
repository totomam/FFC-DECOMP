#include "ffc/types.h"

extern uint32_t func_ov006_0219f078(uint32_t x);
extern int32_t func_ov006_0219e0e8(void *p);
extern uint32_t func_ov006_0219de90(uint32_t a, void *b, int32_t *c, uint32_t d);
extern uint32_t func_ov006_0219df6c(uint32_t a, void *b, int32_t *c, uint32_t d);
extern uint32_t func_ov006_0219e044(uint32_t a, void *b, int32_t *c, uint32_t d);

typedef struct { uint16_t a; uint8_t pad[4]; uint16_t b; uint8_t pad2[7]; uint8_t c; } Sub;
typedef struct { uint8_t pad[0xc]; Sub s; } S;

uint32_t func_ov006_0219ddf0(uint32_t r0, S *x, int32_t *r2, uint32_t r3)
{
    Sub *p = &x->s;
    uint32_t t;

    if (func_ov006_0219f078(p->a) < 1) {
        (*r2)++;
        return r0;
    }
    if (p->c != 0x11) {
        (*r2)++;
        return r0;
    }
    if (func_ov006_0219e0e8(&x->s) > 0) {
        (*r2)++;
        return r0;
    }
    t = func_ov006_0219f078(p->b);
    switch (t) {
    case 0x1010: r0 = func_ov006_0219de90(r0, x, r2, r3); break;
    case 0x2010: r0 = func_ov006_0219df6c(r0, x, r2, r3); break;
    case 0x3010: r0 = func_ov006_0219e044(r0, x, r2, r3); break;
    }
    return r0;
}
