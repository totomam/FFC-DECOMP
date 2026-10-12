#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t a4;
    uint32_t a8;
    uint8_t c;
} Loc;

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02005988(void *dst, void *src);
extern void func_0205d508(void *dst, void *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_02019548(void *dst, void *src);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *object);
extern void func_020634e0(void *dst, void *src, uint32_t n);
extern uint32_t func_0203b67c(void);
extern uint32_t func_0203b6f0(void);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0203b828(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_0200b8bc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0206133c(void *object);
extern void func_02056bc0(void *object, void *node);

extern char data_ov002_021d7218[];
extern char data_ov002_021d7248[];
extern void *data_020b8e44;
extern uint32_t data_ov002_021d71a0[];
extern void *data_0213df18;

void *func_ov002_021c3508(void *self, uint32_t param)
{
    uint32_t t1[3];
    Loc loc;
    uint32_t t2[3];
    uint32_t t3[3];
    uint8_t *s = (uint8_t *)self;
    uint32_t r;
    uint32_t a6;
    uint32_t a7;
    uint32_t a1;
    uint8_t *q;
    Loc *lp;

    func_02056c9c(self, 0);
    *(void **)self = data_ov002_021d7218;
    *(uint32_t *)(s + 0x80) = 0;
    *(uint32_t *)(s + 0x84) = 0;
    *(uint32_t *)(s + 0x88) = 0;

    func_02005988(t1, data_ov002_021d7248);
    func_0205d508(s + 0x98, t1, 7);
    func_020059cc(t1);

    *(uint32_t *)(s + 0xe8) = param;

    func_02019548(&loc, data_020b8e44);
    r = (uint32_t)func_02052d90(loc.a4, loc.a8);
    *(uint32_t *)(s + 0xf0) = *(uint32_t *)((uint8_t *)r + 0x14);

    lp = &loc;
    if (lp->a4 != 0) {
        if (lp->c != 0) {
            func_02052d3c(lp->a4, lp->a8);
        }
        func_02052c04(lp->a4);
    }

    func_02053290(lp);

    func_02005988(t2, (void *)data_ov002_021d71a0[1]);
    func_020634e0(s + 0xf4, t2, 7);
    func_020059cc(t2);

    func_02005988(t3, data_ov002_021d7248);
    func_0205d508(s + 0xf8, t3, 7);
    func_020059cc(t3);

    *(uint32_t *)(s + 0x134) = 0;
    *(uint32_t *)(s + 0x138) = 0;

    *(uint32_t *)(s + 0xd0) = func_0203b67c();
    *(uint32_t *)(s + 0xd4) = func_0203b6f0();

    r = func_0204f7d4(data_0213df18);
    *(uint32_t *)(s + 0xe4) = func_0203b828(r, 1, 1, 0);

    r = func_0205681c(0x28);
    if (r != 0) {
        r = func_0200b8bc(r, 0, 10, 11, 0);
    }
    *(uint32_t *)(s + 0x130) = r;

    func_0206133c((void *)r);

    a7 = *(uint32_t *)(s + 0xe4);
    a6 = *(uint32_t *)(s + 0xd4);
    a1 = *(uint32_t *)(s + 0xd0);

    q = s + 0x48;
    func_02056bc0(q, (void *)a1);
    func_02056bc0(q, (void *)a6);
    func_02056bc0(q, (void *)a7);

    return self;
}
