#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0209cf5c(void *arr, int n, int size, void *ctor, void *dtor);
extern void func_02084ca4(void *a, void *b, int c);
extern void *func_02035fd0(void *o);
extern void func_02035f58(void *o);
extern char data_020ac658[];

typedef struct H18 { uint16_t h[9]; } H18;
typedef struct W11 { uint32_t v[11]; } W11;
typedef struct W13 { uint32_t v[13]; } W13;
typedef struct H42 { uint16_t h[21]; } H42;
typedef struct B20 { uint8_t b[20]; } B20;
typedef struct P2 { uint32_t v[2]; } P2;
typedef struct P3 { uint32_t v[3]; } P3;
typedef struct P4 { uint32_t v[4]; } P4;
typedef struct Blob {
    H18 h;
    uint32_t w0;uint32_t w1;uint32_t w2;uint32_t w3;uint32_t w4;uint32_t w5;uint32_t w6;uint32_t w7;uint32_t w8;uint32_t w9;uint32_t w10;
    P4 q4;
    P3 q3;
    uint32_t t0;uint32_t t1;uint32_t t2;uint32_t t3;uint32_t t4;uint32_t t5;uint32_t t6;uint32_t t7;uint32_t t8;uint32_t t9;uint32_t t10;uint32_t t11;uint32_t t12;
    P2 q2;
} Blob;
typedef struct Self {
    uint32_t vt, pad4, f8, fc, f10;
    H18 h;
    uint32_t w0;uint32_t w1;uint32_t w2;uint32_t w3;uint32_t w4;uint32_t w5;uint32_t w6;uint32_t w7;uint32_t w8;uint32_t w9;uint32_t w10;
    P4 q4;
    P3 q3;
    uint32_t t0;uint32_t t1;uint32_t t2;uint32_t t3;uint32_t t4;uint32_t t5;uint32_t t6;uint32_t t7;uint32_t t8;uint32_t t9;uint32_t t10;uint32_t t11;uint32_t t12;
    P2 q2;
} Self;

void *func_ov001_0218a2b4(Self *self, uint32_t x, Blob b, uint8_t *p, void *q)
{
    uint32_t i;
    uint16_t *src16;
    uint16_t *dst16;

    self->f8 = 0;
    self->fc = 0x100b4;
    self->vt = (uint32_t)data_020ac658;
    func_02036750((uint8_t *)self + 0xac);
    func_0209cf5c((uint8_t *)self + 0x104, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    self->f10 = x;
    self->h = b.h;
    self->w0 = b.w0;
    self->w1 = b.w1;
    self->w2 = b.w2;
    self->w3 = b.w3;
    self->w4 = b.w4;
    self->w5 = b.w5;
    self->w6 = b.w6;
    self->w7 = b.w7;
    self->w8 = b.w8;
    self->w9 = b.w9;
    self->w10 = b.w10;
    self->q4 = b.q4;
    self->q3 = b.q3;
    self->t0 = b.t0;
    self->t1 = b.t1;
    self->t2 = b.t2;
    self->t3 = b.t3;
    self->t4 = b.t4;
    self->t5 = b.t5;
    self->t6 = b.t6;
    self->t7 = b.t7;
    self->t8 = b.t8;
    self->t9 = b.t9;
    self->t10 = b.t10;
    self->t11 = b.t11;
    self->t12 = b.t12;
    *(unsigned long long *)((uint8_t *)self + 0xa4) = *(unsigned long long *)((uint8_t *)&b + 0x90);

    *(H42 *)((uint8_t *)self + 0xb0) = *(H42 *)(p + 4);
    *(uint32_t *)((uint8_t *)self + 0xdc) = *(uint32_t *)(p + 0x30);
    *(B20 *)((uint8_t *)self + 0xe0) = *(B20 *)(p + 0x34);
    *(P4 *)((uint8_t *)self + 0xf4) = *(P4 *)(p + 0x48);
    func_02084ca4(q, (uint8_t *)self + 0x104, 0x1e0);
    return self;
}
