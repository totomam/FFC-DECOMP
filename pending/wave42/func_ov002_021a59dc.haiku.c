#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;

typedef struct {
    uint8_t a;
    uint32_t b;
    uint8_t c;
    uint8_t pad[3];
    uint8_t d;
} Par;

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint8_t pad0[2];
    uint32_t w4;
    uint32_t w8;
    uint32_t w12;
    uint32_t w16;
    uint32_t w20;
    uint32_t w24;
    uint8_t b28;
    uint8_t b29;
    uint8_t pad1[2];
    uint32_t w32;
    uint32_t w36;
    uint32_t w40;
    Pair arr[3];
    uint32_t w44;
    uint32_t w48;
    uint8_t b4c;
} Bbuf;

typedef struct {
    Pair A;
    Bbuf B;
} Frame;

extern void func_0209cf5c(void *arr, int n, int sz, void *ctor, void *dtor);
extern void func_0209d02c(void *arr, int n, int sz, void *dtor);
extern void func_ov002_021c9124(void *p);
extern void func_ov002_021c9130(void *p);
extern void func_ov002_021a5bdc(void *self, void *buf, uint32_t p2, uint32_t p3);
extern void func_ov002_021a7c54(void *self, void *buf, uint32_t p1, uint32_t p2, uint32_t p3, uint8_t a, uint8_t d);

void func_ov002_021a59dc(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, Par par)
{
    Frame f;
    int i;

    f.B.b0 = 0;
    f.B.b1 = 0;
    f.B.w4 = 3;
    f.B.w8 = 0;
    f.B.w12 = 0;
    f.B.w16 = 3;
    f.B.w20 = 0;
    f.B.w24 = 0;
    f.B.b28 = 0;
    f.B.b29 = 0;
    f.B.w32 = 4;
    f.B.w36 = 4;
    f.B.w40 = 0;

    func_0209cf5c(f.B.arr, 3, 8, func_ov002_021c9124, func_ov002_021c9130);

    f.B.w44 = 0;
    f.B.w48 = 0;
    f.B.b4c = 0;

    for (i = 0; i < 3; i++) {
        func_ov002_021c9124(&f.A);
        f.B.arr[i].x = f.A.x;
        f.B.arr[i].y = f.A.y;
        func_ov002_021c9130(&f.A);
    }

    f.B.w48 = par.b;
    f.B.b4c = par.c;

    func_ov002_021a5bdc(p0, &f.B, p2, p3);
    func_ov002_021a7c54(p0, &f.B, p1, p2, p3, par.a, par.d);

    func_0209d02c(f.B.arr, 3, 8, func_ov002_021c9130);
}
