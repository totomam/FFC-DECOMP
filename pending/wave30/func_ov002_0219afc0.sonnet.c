#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0xc];
    uint32_t w;
    uint8_t pad1[0x70];
    uint8_t *buf;
} Obj;

void func_ov002_0219afc0(Obj *o) {
    int i; uint32_t j;
    uint8_t *b = o->buf;
    for (i = 0; i < 2; i++) {
        if (b[i] == 0) return;
    }
    for (j = 0; j < 2; j++) {
        uint8_t v = 0;
        o->buf[j] = v;
    }
    o->w = 2 | (o->w & ~0xffu);
}
