#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint8_t pad4[0x14];
    uint32_t w18;
    uint8_t b1c;
    uint8_t b1d;
    uint8_t b1e;
    uint8_t b1f;
    uint32_t pad20[3];
    uint32_t w2c;
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
    uint32_t w3c;
    uint32_t w40;
} Obj;

typedef struct Glob {
    uint8_t pad[0xc];
    Obj *p;
} Glob;

extern Glob data_ov000_0217004c;

void func_ov000_02159834(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7)
{
    data_ov000_0217004c.p->w2c = a2;
    data_ov000_0217004c.p->w30 = a3;
    data_ov000_0217004c.p->w34 = a4;
    data_ov000_0217004c.p->w38 = a5;
    data_ov000_0217004c.p->w3c = a6;
    data_ov000_0217004c.p->w40 = a7;
    data_ov000_0217004c.p->b1d = 0;
    data_ov000_0217004c.p->b1e = 0;
    data_ov000_0217004c.p->b1f = 0;
    data_ov000_0217004c.p->b1c = 0;
    data_ov000_0217004c.p->w0 = 1;
    if (data_ov000_0217004c.p->w18 == 0) {
        data_ov000_0217004c.p->b1f++;
    }
    data_ov000_0217004c.p->b1f++;
}
