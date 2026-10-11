#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_021494c0(void *obj, void *a, void *b, uint16_t e, uint32_t f, uint16_t g, uint16_t h, uint32_t i);
extern char data_ov003_02179764[];

typedef struct {
    char *vt;
    uint8_t pad[0x24];
    uint16_t f28;
    uint32_t f2c;
} Obj;

void *func_ov003_021496bc(void *a, void *b, uint16_t c, uint32_t d, ...)
{
    Obj *o = (Obj *)func_0205681c(0x30);
    if (o != 0) {
        uint32_t f = *(uint32_t *)(&d + 2);
        uint8_t *ap = (uint8_t *)(&d + 1);
        uint32_t t;
        func_ov003_021494c0(o, a, b, *(uint16_t *)ap, f, *(uint16_t *)(ap + 8), *(uint16_t *)(ap + 0xc), *(uint32_t *)(&d + 5));
        o->vt = data_ov003_02179764;
        t = d;
        o->f28 = c;
        o->f2c = t;
    }
    return o;
}
