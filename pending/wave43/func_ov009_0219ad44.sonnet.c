#include "ffc/types.h"

typedef struct Vec3 {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

typedef struct Pair {
    int32_t a;
    int32_t b;
} Pair;

typedef struct Guard {
    void *ptr;
    volatile uint8_t live;
} Guard;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02062a78(void *obj, Pair q, Pair w, int32_t d, int32_t e);
extern void func_02056bc0(void *object, void *node);
extern int32_t data_020a7c00;

typedef struct Obj { void **vt; } Obj;
#define A (*(Obj **)(p0 + 0x94))
#define B8 (*(uint32_t *)(p0 + 0xb8))

void func_ov009_0219ad44(uint8_t *p0)
{
    Guard g;
    Pair q;
    Pair v2;
    Pair w;
    Pair v1;
    uint32_t r6;
    int32_t res;
    uint32_t b;

    g.live = 1;
    g.ptr = p0 + 0xa0;
    if (g.live) {
        func_0208763c(g.ptr);
    }

    if (A != 0 && B8 > 0x100) {
        r6 = func_020817c8(B8 << 12, data_020a7c00);
        b = B8;
        v1 = ((Pair (*)(Obj *))A->vt[4])(A);
        w.a = -(int32_t)b;
        w.b = v1.b;
        v2 = ((Pair (*)(Obj *))A->vt[4])(A);
        q.a = 0;
        q.b = v2.b;
        res = func_02062a78(A, q, w, (int32_t)r6 >> 12, 0);
        func_02056bc0(p0 + 0x14, (void *)res);
    }

    if (g.live) {
        func_02087678(g.ptr);
    }
}
