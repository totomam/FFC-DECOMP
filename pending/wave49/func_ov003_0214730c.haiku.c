#include "ffc/types.h"

typedef struct Ent {
    uint16_t id;
    uint16_t pad;
    int32_t pad2;
    int32_t x;
    int32_t y;
} Ent;

typedef struct Pos {
    int32_t x;
    int32_t y;
} Pos;

typedef struct Vec {
    int32_t c;
    int32_t unused;
} Vec;

extern Ent *func_ov003_02155b40(void *e);
extern void func_ov003_02155b44(int32_t *out, void *e);
extern uint8_t *func_ov003_021585cc(void *e);
extern int32_t func_ov003_02155ba4(void *e);
extern void func_ov003_02155bac(int32_t *out, void *e);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void *func_02052d90(void *mar, uint32_t index);
extern int32_t *func_ov003_02153470(void *p);
extern int32_t func_0201f960(void *a, int32_t b, void *c);
extern void *data_020b93b8;

int32_t func_ov003_0214730c(uint8_t *a, Pos *b, Vec c)
{
    int32_t i, tt, o, dx, dy, r, acc, sx, sy, L, T, R, B;
    int32_t box[4];
    uint8_t *e;
    Ent *q;
    uint8_t buf[0x20];
    uint16_t key;
    int32_t s1, s2, s3;

    tt = *(int32_t *)(*(uint8_t **)(a + 0x17c) + 0xb0);
    for (i = 0; i < 0x32; i++) {
        e = *(uint8_t **)(a + 0xa0 + i * 4);
        if (func_ov003_02155b40(e)->id == 0) continue;
        if (func_ov003_02155b40(e)->id == tt) continue;
        func_ov003_02155b44(&o, e);
        if (o == 0) continue;
        if (func_ov003_021585cc(e)[2] == 1) continue;
        if (func_ov003_02155ba4(e) == 0) {
            q = func_ov003_02155b40(e);
            dx = b->x - q->x;
            dy = b->y - q->y;
            func_ov003_02155b44(&r, e);
            s1 = func_020817c8(c.c + r, c.c + r);
            s2 = func_020817c8(dy, dy);
            s3 = func_020817c8(dx, dx);
            if (s2 + s3 < s1) return 1;
        } else {
            sx = b->x;
            sy = b->y;
            q = func_ov003_02155b40(e);
            func_ov003_02155bac(box, e);
            L = box[0] + q->x;
            T = box[1] + q->y;
            R = box[2] + q->x;
            B = box[3] + q->y;
            acc = 0;
            if (sx < L) acc += func_020817c8(L - sx, L - sx);
            if (sx > R) acc += func_020817c8(sx - R, sx - R);
            if (sy < T) acc += func_020817c8(T - sy, T - sy);
            if (sy > B) acc += func_020817c8(sy - B, sy - B);
            if (acc < func_020817c8(c.c, c.c)) return 1;
        }
    }

    key = *(uint16_t *)((uint8_t *)func_02052d90(*(void **)(a + 0x348), *(uint32_t *)(a + 0x34c)) + 0xc);
    if (*func_ov003_02153470(*(void **)(a + 0x9c)) != key) return 0;

    for (i = 0; i < 0x14; i++) {
        func_0201f960(*(void **)&data_020b93b8, 0, buf);
        if (buf[0] == 0) continue;
        if (buf[2] != 0) continue;
        dy = b->y - *(int32_t *)(buf + 0x10);
        dx = b->x - *(int32_t *)(buf + 0xc);
        s1 = func_020817c8(c.c + 0x1000, c.c + 0x1000);
        s2 = func_020817c8(dx, dx);
        s3 = func_020817c8(dy, dy);
        if (s2 + s3 < s1) return 1;
    }
    return 0;
}
