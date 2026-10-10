#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint8_t pad4[0x1d - 4];
    uint8_t b1d;
    uint8_t pad1e[0x2c - 0x1e];
    void (*fn)(int, int, void *);
    void *p;
} Obj;

typedef struct Outer {
    uint8_t pad[0xc];
    Obj *obj;
} Outer;

extern Outer data_ov000_0217004c;

void func_ov000_02159d14(void)
{
    Obj *o = data_ov000_0217004c.obj;
    o->fn(0, o->b1d, o->p);
    data_ov000_0217004c.obj->w0 = 2;
}
