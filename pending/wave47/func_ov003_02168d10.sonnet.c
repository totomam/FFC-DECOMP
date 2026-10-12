#include "ffc/types.h"

typedef struct { int32_t x, y; } P2;
typedef struct { int32_t pad[21]; int32_t a[4]; P2 dir, off, pos; } B4;
extern uint32_t func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(void);
extern uint8_t *func_ov003_021464f4(uint32_t h, uint8_t *b);
extern uint8_t *func_ov003_02155b40(uint8_t *a);
extern void func_ov003_02155b44(int32_t *out, uint8_t *a);
extern int16_t data_020a1bd0[];
extern int32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02056aec(uint8_t *self);
extern int32_t func_ov003_0215b394(uint8_t *a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t g);
extern int32_t func_ov003_0214c720(uint32_t h, uint8_t *b, P2 p, uint8_t z, int32_t w, int32_t v);
extern void func_02056bc0(uint8_t *object, int32_t node);

void func_ov003_02168d10(uint8_t *self)
{
    int32_t r5;
    uint8_t *r6;
    uint8_t *p;
    B4 base;
#define dir base.dir
#define off base.off
#define pos base.pos
    int32_t idx, i2, c, v7b, node;
    uint16_t lvl;
    int32_t r7;

    func_020424e0(*(uint32_t *)(self + 0x80));
    r5 = *(int32_t *)(func_ov003_02146494() + 0xb0);
    if (r5 == 0) return;
    r6 = func_ov003_021464f4(func_020424e0(*(uint32_t *)(self + 0x80)), (uint8_t *)r5);
    if (r6 == 0) return;
    lvl = *(uint16_t *)(func_ov003_02155b40(r6) + 0x10);
    func_ov003_02155b44(base.a, r6);
    idx = ((int32_t)lvl) >> 4;
    i2 = idx * 2;
    r5 = base.a[0];
    dir.x = data_020a1bd0[i2 + 1];
    dir.y = data_020a1bd0[i2];
    off.y = func_020817c8(dir.y, r5 + 0x1000);
    off.x = func_020817c8(dir.x, r5 + 0x1000);
    p = func_ov003_02155b40(r6);
    pos.y = off.y + *(int32_t *)(p + 0xc);
    pos.x = *(int32_t *)(p + 8) + off.x;
    c = self[0x84] ? 0x16 : 0x15;
    node = func_02056aec(self);
    v7b = func_ov003_0215b394(r6, 1, 1, 0x1000, 0, 0, 0);
    r7 = func_ov003_0214c720(func_020424e0(*(uint32_t *)(self + 0x80)), r6, pos, self[0x84], c, 0xee);
    func_02056bc0(self + 0x14, r7);
    func_02056bc0(self + 0x14, v7b);
    func_02056bc0(self + 0x14, node);
}
