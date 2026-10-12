#include "ffc/types.h"

extern void func_02015e8c(void *out, void *arg);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void func_ov002_021ad534(void *out, int32_t kind, uint32_t idx);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;

typedef struct { uint32_t p0; uint32_t a; uint32_t b; uint8_t flag; } Tmp;
typedef struct { int32_t x; int32_t y; } Pair;

void func_ov002_021ad704(Pair *out, int32_t kind, uint32_t idx) {
    Tmp t;
    Tmp *tp;
    Pair r;
    int32_t x, y;
    char *base;

        func_02015e8c(&t, data_020b8e44);
    base = (char *)func_02052d90(t.a, t.b);
    switch (idx) {
    case 0:
        x = *(int32_t *)(base + 0xa4);
        y = *(int32_t *)(base + 0xa8);
        break;
    case 1:
        x = *(int32_t *)(base + 0xac);
        y = *(int32_t *)(base + 0xb0);
        break;
    case 2:
        x = *(int32_t *)(base + 0xb4);
        y = *(int32_t *)(base + 0xb8);
        break;
    case 3:
        x = *(int32_t *)(base + 0xbc);
        y = *(int32_t *)(base + 0xc0);
        break;
    case 4:
        x = *(int32_t *)(base + 0xc4);
        y = *(int32_t *)(base + 0xc8);
        break;
    case 5:
        x = *(int32_t *)(base + 0xcc);
        y = *(int32_t *)(base + 0xd0);
        break;
    }
    tp = &t;
    if (kind == 1) {
        x = -x;
    }
    func_ov002_021ad534(&r, kind, idx);
    {
        int32_t ny = y + r.y;
        int32_t nx = x + r.x;
        out->y = ny;
        out->x = nx;
    }
    if (t.a != 0) {
        if (tp->flag != 0) {
            func_02052d3c(t.a, t.b);
        }
        func_02052c04(t.a);
    }
    func_02053290(tp);
}
