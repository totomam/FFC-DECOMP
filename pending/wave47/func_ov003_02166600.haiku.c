#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t flag : 1; } Flagged;

extern void *func_020424e0(void *obj);
extern void *func_ov003_0214b958(void *a, Pair v, void *d);
extern void func_02056bc0(void *object, void *node);
extern void func_0203919c(void *dst, uint32_t val);
extern void func_020095b8(void *a, void *b);
extern void func_02050ea4(void *a, void *b, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_02092878(void *a, void *b);
extern void func_ov003_0214de54(void *a, void *b, void *c);
extern void func_0200958c(void *object);
extern Pair data_ov003_0217b1c8;

void func_ov003_02166600(uint8_t *self) {
    uint32_t s = *(uint32_t *)(self + 0x8c);
    *(uint32_t *)(self + 0x8c) = *(uint32_t *)(self + 0x8c) + 1;

    switch (s) {
    case 0: {
        void *r = func_020424e0(*(void **)(self + 0x80));
        void *n = func_ov003_0214b958(r, data_ov003_0217b1c8, *(void **)(self + 0x84));
        func_02056bc0(self + 0x14, n);
        return;
    }
    case 1: {
        uint8_t f[0x44];
        uint8_t *p;
        uint32_t bit;
        void *x;

        func_0203919c(f + 0x18, *(uint32_t *)(self + 0x88));
        func_020095b8(f, f + 0x18);
        func_02050ea4(f + 0xc, f, 10);
        func_020059cc(f);

        p = *(uint8_t **)(f + 0xc);
        bit = ((Flagged *)p)->flag;
        if (!bit) {
            p = p + 1;
        } else {
            p = *(uint8_t **)(p + 8);
        }
        func_02092878(f + 0x24, p);

        x = func_020424e0(*(void **)(self + 0x80));
        func_ov003_0214de54(x, *(void **)(self + 0x84), f + 0x24);

        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
        func_0200958c(f + 0xc);
        func_020059cc(f + 0x18);
        return;
    }
    }
}
