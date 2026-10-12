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
extern int32_t func_02062a78(void *obj, Pair q, int32_t d, int32_t e, int32_t f, int32_t g);
extern void func_02056bc0(void *object, void *node);
extern int32_t data_020a7c00;

void func_ov009_0219ad44(uint8_t *p0)
{
    void *a;
    uint32_t b8;
    uint32_t r6;
    Vec3 v1;
    Vec3 v2;
    Pair q;
    int32_t res;
    Guard g;

    g.live = 1;
    g.ptr = p0 + 0xa0;
    if (g.live) {
        func_0208763c(g.ptr);
    }

    a = *(void **)(p0 + 0x94);
    if (a != 0) {
        b8 = *(uint32_t *)(p0 + 0xb8);
        if (b8 > 0x100) {
            r6 = func_020817c8(b8 << 12, data_020a7c00);
            v1 = ((Vec3 (*)(void *))((void **)*(void **)a)[4])(a);
            v2 = ((Vec3 (*)(void *))((void **)*(void **)a)[4])(a);
            q.a = 0;
            q.b = v2.y;
            res = func_02062a78(a, q, -(int32_t)b8, v1.y, (int32_t)r6 >> 12, 0);
            func_02056bc0(p0 + 0x14, (void *)res);
        }
    }

    if (g.live) {
        func_02087678(g.ptr);
    }
}
