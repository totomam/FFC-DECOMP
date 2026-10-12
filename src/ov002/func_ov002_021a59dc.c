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


extern void func_0209cf5c(void *arr, int n, int sz, void *ctor, void *dtor);
extern void func_0209d02c(void *arr, int n, int sz, void *dtor);
extern void func_ov002_021c9124(void *p);
extern void func_ov002_021c9130(void *p);
extern void func_ov002_021a5bdc(void *self, void *buf, uint32_t p2, uint32_t p3);
extern void func_ov002_021a7c54(void *self, void *buf, uint32_t p1, uint32_t p2, uint32_t p3, uint8_t a, uint8_t d);

void func_ov002_021a59dc(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint8_t pa, uint32_t pb, uint8_t pc, uint8_t pd)
{
    Pair A;
    Bbuf B;
    Bbuf *q = &B;
    int i;

    B.b0 = 0;
    B.b1 = 0;
    B.w4 = 3;
    B.w8 = 0;
    B.w12 = 0;
    B.w16 = 3;
    B.w20 = 0;
    B.w24 = 0;
    B.b28 = 0;
    B.b29 = 0;
    B.w32 = 4;
    B.w36 = 4;
    B.w40 = 0;

    func_0209cf5c(B.arr, 3, 8, func_ov002_021c9124, func_ov002_021c9130);

    B.w44 = 0;
    B.w48 = 0;
    B.b4c = 0;

    for (i = 0; i < 3; i++) {
        func_ov002_021c9124(&A);
        q->arr[i].x = A.x;
        q->arr[i].y = A.y;
        func_ov002_021c9130(&A);
    }

    B.w48 = pb;
    B.b4c = pc;

    func_ov002_021a5bdc(p0, &B, p2, p3);
    func_ov002_021a7c54(p0, &B, p1, p2, p3, pa, pd);

    func_0209d02c(B.arr, 3, 8, func_ov002_021c9130);
}
