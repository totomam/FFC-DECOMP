#include "ffc/types.h"

extern uint8_t data_020ae644[];
extern uint8_t data_020ae654[];

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    void *fc;
    uint32_t f10;
    void *f14;
    uint32_t f18;
    void *f1c;
    uint32_t f20;
    void *f24;
    uint32_t f28;
    uint32_t f2c;
    uint16_t f30[17];
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
} Out;

void func_ov002_021aa7a0(void *out, void *in) {
    Out *o = (Out *)out;
    uint8_t *s = (uint8_t *)in;
    uint32_t off;
    uint8_t *src;
    uint16_t *d;
    int n;

    o->f8 = *(uint32_t *)(s + 0xe0);
    o->f0 = *(uint32_t *)(s + 0xd8);
    o->f10 = *(uint32_t *)(s + 0xe8);
    o->f4 = data_020ae644;
    o->fc = data_020ae644;
    o->f14 = data_020ae644;
    o->f18 = *(uint32_t *)(s + 0xf0);
    o->f1c = data_020ae644;
    o->f20 = *(uint32_t *)(s + 0xf8);
    o->f24 = data_020ae654;
    off = 0x100;
    o->f28 = *(uint32_t *)(s + off);
    o->f2c = *(uint32_t *)(s + off + 4);
    src = s + off + 8;
    d = o->f30;
    n = 17;
    do {
        *d++ = *(uint16_t *)src;
        src += 2;
    } while (--n != 0);
    off = 0x12c;
    o->f54 = *(uint32_t *)(s + off);
    o->f58 = *(uint32_t *)(s + off + 4);
    o->f5c = *(uint32_t *)(s + off + 8);
}
