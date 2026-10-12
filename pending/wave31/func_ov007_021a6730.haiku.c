#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2378(void *obj, uint32_t val);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c43b0[];
extern uint32_t data_ov007_021c43b8[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;


void func_ov007_021a6730(void *self) {
    uint32_t *f = (uint32_t *)self;
    Pair v;
    void *r;
    switch (f[0x98 / 4]) {
    case 0:
        v = *(Pair *)data_ov007_021c43b0;
        *(Pair *)((uint8_t *)self + 0x80) = v;
        return;
    case 1:
        r = func_0205681c(0x90);
        if (r != (void *)0) {
            r = func_ov007_021a2378(r, f[0x88 / 4]);
        }
        func_02056bc0((uint8_t *)self + 0x14, r);
        v = *(Pair *)data_ov007_021c43b8;
        *(Pair *)((uint8_t *)self + 0x80) = v;
        return;
    default:
        return;
    }
}
