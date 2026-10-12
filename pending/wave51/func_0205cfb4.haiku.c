#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern int func_02055110(void *a, void *b);
extern char data_020b0f88[];
extern void *data_0213e098;

typedef struct {
    uint32_t a, b, c, d;
} Vec4;

typedef struct {
    uint32_t *o;
    uint32_t a, b, c;
} Ctx;

typedef struct Node {
    void *vt;
    uint32_t w04[2];
    uint32_t flags;
    uint32_t w10;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Vec4 v;
    uint32_t o1;
    uint32_t o2;
    uint32_t o3;
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint8_t g;
    uint8_t h;
} Node;

int func_0205cfb4(Ctx ctx, Vec4 v, uint32_t x, uint32_t y, uint32_t z, uint8_t g, uint8_t h)
{
    Node *n = (Node *)func_0205681c(0x4c);
    if (n) {
        n->flags &= ~0xffu;
        n->vt = data_020b0f88;
        n->a = ctx.a;
        n->b = ctx.b;
        n->c = ctx.c;
        n->v = v;
        n->o1 = ctx.o[1];
        n->o2 = ctx.o[0xf];
        n->o3 = ctx.o[0x10];
        n->x = x;
        n->y = y;
        n->z = z;
        n->g = g;
        n->h = h;
    }
    return func_02055110(data_0213e098, n);
}
