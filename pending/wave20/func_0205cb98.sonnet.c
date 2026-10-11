#include "ffc/types.h"

extern void *func_02059b60(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern char data_020b0ee4[];

typedef struct Obj {
    void *vt;
    uint8_t pad[0x20];
    uint16_t h24;
    uint16_t pad2;
    uint32_t w28;
    uint32_t w2c;
    uint32_t w30;
    uint32_t w34;
} Obj;

void *func_0205cb98(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    Obj *o = (Obj *)p;
    func_02059b60(p, a, b, c, d, e, f);
    o->h24 = 0;
    o->vt = data_020b0ee4;
    o->w28 = 0x1000;
    o->w2c = 0x1000;
    o->w30 = 0;
    o->w34 = 0;
    return p;
}
