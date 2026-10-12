#include "ffc/types.h"

extern void func_02059434(uint32_t);
extern void func_02060100(uint32_t);
extern void func_02060c0c(uint32_t);
extern void func_02060458(uint32_t);
extern void func_02060ebc(uint32_t);

typedef struct Inner {
    uint8_t pad0[4];
    uint32_t *p4;
    uint8_t pad1[0x38 - 8];
    uint16_t *p38;
    uint8_t pad2[0x88 - 0x3c];
    uint32_t *p88;
} Inner;

typedef struct Outer {
    uint32_t pad0;
    uint32_t pad1;
    Inner *inner;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint32_t h;
    uint32_t i;
    uint8_t pad2[0xa4 - 0x28];
    uint16_t val;
} Outer;

void func_0204e7ac(Outer *a) {
    uint16_t v = a->val;
    *a->inner->p38 = v;
    *a->inner->p4 = a->c;
    *a->inner->p88 = a->d;
    if (a->e != 0) {
        func_02059434(a->e);
    }
    if (a->f != 0) {
        func_02060100(a->f);
    }
    func_02060c0c(a->g);
    func_02060458(a->h);
    func_02060ebc(a->i);
}
