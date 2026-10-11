#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern char data_ov002_021d5328[];

typedef struct {
    void *vtbl;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t w10;
    uint32_t a14;
    uint8_t b18;
    uint8_t pad19[3];
    uint32_t c1c;
} Obj;

void *func_ov002_021ab244(uint32_t a, uint8_t b, uint32_t c) {
    Obj *o = (Obj *)func_0205681c(0x20);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->vtbl = data_ov002_021d5328;
        o->a14 = a;
        o->b18 = b;
        o->c1c = c;
    }
    return o;
}
