#include "ffc/types.h"

extern void *func_0205ff14(void *object, uint32_t index, uint32_t third);
extern void *func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*d)(void), void (*e)(void));
extern uint32_t *func_02056830(uint32_t size);
extern void *func_0205681c(uint32_t size);
extern void *func_02057c28(void *p, void *base, uint32_t size);
extern void func_0205f750(void);
extern void func_0205f74c(void);

typedef struct Leaf {
    uint8_t pad[0x14];
    void *f14;
} Leaf;

typedef struct Mid {
    uint8_t pad[0x18];
    Leaf *f18;
} Mid;

typedef struct Elem {
    uint32_t w0;
    uint16_t h4;
    uint16_t h6;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
    uint32_t w24;
} Elem;

typedef struct Obj {
    uint8_t pad0[0x14];
    Mid *f14;
    uint32_t f18;
    uint32_t f1c;
    uint8_t pad1[4];
    void *f24;
    void *f28;
    Elem *f2c;
    uint32_t *f30;
} Obj;

void *func_0205f654(Obj *this, uint32_t x) {
    uint32_t cnt;
    uint32_t i;
    Elem *e;
    void *p;
    uint32_t z;
    uint32_t mask;

    this->f24 = func_0205ff14(this->f14->f18->f14, this->f1c, x);
    this->f2c = (Elem *)func_0209cec8(this->f18 + 1, 0x28, 8, func_0205f74c, func_0205f750);
    this->f30 = func_02056830((this->f18 + 1) * 4);
    this->f30[0] = this->f18;
    e = this->f2c;
    e[this->f18].w20 = 0;
    for (i = 1; i < this->f18 + 1; i++) {
        this->f30[i] = i - 1;
        *(uint32_t *)((uint8_t *)this->f2c + i * 40 - 8) = i;
    }
    z = 0;
    mask = 0xfffffcff;
    e = this->f2c;
    cnt = this->f18;
    if (cnt != 0) {
        do {
            e->h4 = z;
            e->w0 = (z & mask) | (8 << 6);
            e->w8 = z;
            e->wc = z;
            e->w10 = z;
            e->w14 = z;
            e->w18 = 8;
            e->w1c = 8;
            e->w20 &= 0x3ff;
            e++;
            cnt--;
        } while (cnt != 0);
    }
    e->h4 = z;
    e->w0 = (z & mask) | (2 << 8);
    e->w8 = z;
    e->wc = z;
    e->w10 = z;
    e->w14 = z;
    e->w18 = 8;
    e->w1c = 8;
    e->w20 &= 0x3ff;

    p = func_0205681c(0x3c);
    if (p != 0) {
        p = func_02057c28(p, this->f2c, this->f18 * 40);
    }
    this->f28 = p;
    return p;
}
