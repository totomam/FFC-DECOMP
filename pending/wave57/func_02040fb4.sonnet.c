#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern char data_020af1b0[];
extern char data_020ae644[];
extern char data_020ae654[];
extern uint32_t data_020af338[];

typedef struct {
    uint32_t a0; void *t1; uint32_t a2; void *t3; uint32_t a4; void *t5;
    uint32_t a6; void *t7; uint32_t a8; void *t9; uint32_t a10; uint32_t a11;
    uint16_t h[17]; uint16_t pad;
    uint32_t x, y, z;
} Blk;

typedef struct {
    void *vt; uint8_t pad[0x7c];
    Blk b1; Blk b2;
    uint32_t f140, f144, f148; uint8_t f14c, f14d;
} Obj;

typedef struct {
    uint8_t pad[0x80]; uint32_t w80, w84;
} P;

void func_02040fb4(uint8_t *p)
{
    Obj *n;
    uint8_t *r7;
    uint32_t flag;
    Blk *q;
    uint16_t *s, *d;
    int i;

    n = func_0205681c(0x150);
    if (n != 0) {
        flag = *(uint32_t *)(p + 0x1c0);
        if (flag != 0) {
            r7 = 0;
        } else {
            r7 = p + 0x1a0;
        }
        func_02056c9c(n, 0);
        q = &n->b1;
        n->vt = data_020af1b0;
        n->b1.a0 = *(uint32_t *)(p + 0xa4);
        q->t1 = data_020ae644;
        q->a2 = *(uint32_t *)(p + 0xac);
        q->t3 = data_020ae644;
        q->a4 = *(uint32_t *)(p + 0xb4);
        q->t5 = data_020ae644;
        q->a6 = *(uint32_t *)(p + 0xbc);
        q->t7 = data_020ae644;
        q->a8 = *(uint32_t *)(p + 0xc4);
        q->t9 = data_020ae644;
        q->a10 = *(uint32_t *)(p + 0xcc);
        q->t9 = data_020ae654;
        q->a11 = *(uint32_t *)(p + 0xd0);
        s = (uint16_t *)(p + 0xd4);
        d = q->h;
        for (i = 0x11; i != 0; i--) *d++ = *s++;
        q->x = *(uint32_t *)(p + 0xf8);
        q->y = *(uint32_t *)(p + 0xfc);
        q->z = *(uint32_t *)(p + 0x100);
        n->b2.a0 = *(uint32_t *)(p + 0x104);
        q = &n->b2;
        q->t1 = data_020ae644;
        q->a2 = *(uint32_t *)(p + 0x10c);
        q->t3 = data_020ae644;
        q->a4 = *(uint32_t *)(p + 0x114);
        q->t5 = data_020ae644;
        q->a6 = *(uint32_t *)(p + 0x11c);
        q->t7 = data_020ae644;
        q->a8 = *(uint32_t *)(p + 0x124);
        q->t9 = data_020ae644;
        q->a10 = *(uint32_t *)(p + 0x12c);
        q->t9 = data_020ae654;
        q->a11 = *(uint32_t *)(p + 0x130);
        s = (uint16_t *)(p + 0x134);
        d = q->h;
        for (i = 0x11; i != 0; i--) *d++ = *s++;
        q->x = *(uint32_t *)(p + 0x158);
        q->y = *(uint32_t *)(p + 0x15c);
        q->z = *(uint32_t *)(p + 0x160);
        n->f140 = (uint32_t)r7;
        n->f144 = 0;
        n->f14c = 0;
        n->f14d = (flag != 0);
    }
    func_02056bc0(p + 0x14, n);
    ((P *)p)->w80 = data_020af338[0];
    ((P *)p)->w84 = data_020af338[1];
}
