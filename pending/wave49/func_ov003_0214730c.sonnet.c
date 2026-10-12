#include "ffc/types.h"

typedef struct Ent { uint16_t id; uint16_t pad; int32_t pad2; int32_t x; int32_t y; } Ent;
typedef struct Pos { int32_t x; int32_t y; } Pos;
typedef struct Vec { int32_t c; int32_t unused; } Vec;
typedef struct Pt { int32_t x, y, r; } Pt;
typedef struct Rc { int32_t l, t, r, b; } Rc;

extern Ent *func_ov003_02155b40(void *e);
extern void func_ov003_02155b44(int32_t *out, void *e);
extern uint8_t *func_ov003_021585cc(void *e);
extern int32_t func_ov003_02155ba4(void *e);
extern void func_ov003_02155bac(Rc *out, void *e);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t *func_ov003_02153470(void *p);
extern int32_t func_0201f960(void *a, int32_t b, void *c);
extern void *data_020b93b8;

int32_t func_ov003_0214730c(uint8_t *a, Pos *b, Vec c)
{
    int32_t i, o, dx, dy, r, acc;
    int32_t s1, s2, s3;
    uint8_t *e;
    Ent *q;
    uint16_t key;
    struct { int32_t tt; int32_t cc; int32_t c2; int32_t pad[0x58]; Pos qp; Pos sp2; int32_t pad2[0x1c]; int32_t r; int32_t z; int32_t o; Pos d1; Pos d2; Rc box; uint8_t buf[0x2c]; Rc rc; Pt pt; } L;

        L.tt = *(int32_t *)(*(uint8_t **)(a + 0x17c) + 0xb0);
    L.cc = c.c;
    for (i = 0; i < 0x32; i++) {
        e = *(uint8_t **)(a + 0xa0 + i * 4);
        if (func_ov003_02155b40(e)->id == 0) continue;
        if (L.tt == func_ov003_02155b40(e)->id) continue;
        func_ov003_02155b44(&L.o, e);
        if (L.o == 0) continue;
        if (func_ov003_021585cc(e)[2] == 1) continue;
        if (func_ov003_02155ba4(e) == 0) {
            q = func_ov003_02155b40(e);
            L.d2.y = b->y - q->y;
            L.d2.x = b->x - q->x;
            func_ov003_02155b44(&L.r, e);
            s1 = func_020817c8(L.cc + L.r, L.cc + L.r);
            s2 = func_020817c8(L.d2.y, L.d2.y);
            s3 = func_020817c8(L.d2.x, L.d2.x);
            if (s3 + s2 < s1) return 1;
        } else {
            L.sp2.y = b->y;
            L.sp2.x = b->x;
            L.pt.y = L.sp2.y; L.pt.x = L.sp2.x; L.pt.r = L.cc;
            q = func_ov003_02155b40(e);
            L.qp.x = q->x; L.qp.y = q->y;
            func_ov003_02155bac(&L.box, e);
            L.rc.l = L.box.l + L.qp.x;
            L.rc.t = L.box.t + L.qp.y;
            L.rc.r = L.box.r + L.qp.x;
            L.rc.b = L.box.b + L.qp.y;
            acc = 0;
            if (L.pt.x < L.rc.l) acc += func_020817c8(L.rc.l - L.pt.x, L.rc.l - L.pt.x);
            if (L.pt.x > L.rc.r) acc += func_020817c8(L.pt.x - L.rc.r, L.pt.x - L.rc.r);
            if (L.pt.y < L.rc.t) acc += func_020817c8(L.rc.t - L.pt.y, L.rc.t - L.pt.y);
            if (L.pt.y > L.rc.b) acc += func_020817c8(L.pt.y - L.rc.b, L.pt.y - L.rc.b);
            if (acc < func_020817c8(L.pt.r, L.pt.r)) return 1;
        }
    }

    key = *(uint16_t *)((uint8_t *)func_02052d90(*(void **)(a + 0x348), *(uint32_t *)(a + 0x34c)) + 0xc);
    if (*func_ov003_02153470(*(void **)(a + 0x9c)) != key) return 0;

    L.c2 = c.c;
    for (i = 0; i < 0x14; i++) {
        func_0201f960(*(void **)&data_020b93b8, 0, L.buf);
        if (L.buf[0] == 0) continue;
        if (L.buf[2] != 0) continue;
        L.d1.y = b->y - *(int32_t *)(L.buf + 0x10);
        L.d1.x = b->x - *(int32_t *)(L.buf + 0xc);
        s1 = func_020817c8(L.c2 + 0x1000, L.c2 + 0x1000);
        s2 = func_020817c8(L.d1.y, L.d1.y);
        s3 = func_020817c8(L.d1.x, L.d1.x);
        if (s2 + s3 < s1) return 1;
    }
    return 0;
}
