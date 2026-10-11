#include "ffc/types.h"
extern uint32_t data_020b2318;
typedef struct {
    void *vtbl; uint32_t f04,f08,f0c,f10,f14,f18;
    uint8_t f1c; uint8_t pad[3];
    uint32_t f20,f24,f28,f2c;
} FfcObj;
void func_02072f4c(FfcObj *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t t = o->f0c;
    o->f14 = a;
    t = (t >> 8) << 8;
    o->f18 = 0;
    o->f1c = 0;
    o->f0c = t;
    o->f28 = d;
    o->vtbl = &data_020b2318;
    o->f20 = b;
    o->f24 = c;
    o->f2c = e;
}
