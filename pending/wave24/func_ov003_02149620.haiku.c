#include "ffc/types.h"

typedef struct Obj {
    void *vtbl;
    uint8_t pad[0x24];
    uint16_t f28;
} Obj;

extern void *func_0205681c(uint32_t size);
extern void func_ov003_021494c0(void *obj, void *p, uint32_t a, uint32_t c,
                                uint32_t s5, uint16_t s6, uint16_t s7, uint32_t s8);
extern char data_ov003_021797a4[];

Obj *func_ov003_02149620(void *p, uint32_t a, uint16_t b, uint32_t c,
                         uint32_t s5, uint16_t s6, uint16_t s7, uint32_t s8)
{
    Obj *o = (Obj *)func_0205681c(0x2c);
    if (o != 0) {
        func_ov003_021494c0(o, p, a, c, s5, s6, s7, s8);
        o->vtbl = data_ov003_021797a4;
        o->f28 = b;
    }
    return o;
}
