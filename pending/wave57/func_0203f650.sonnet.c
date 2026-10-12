#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02035f58(void *p);
extern void *func_02035e10(void *object);
extern void func_02053234(void *object);
extern void func_02005988(void *out, void *src);
extern void func_02018c48(void *out, void *in);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_02053290(void *object);
extern void *func_020059cc(void *object);
extern uint32_t *data_0213df18;
extern char data_020af1c8[];
extern char data_020af258[];
extern uint32_t data_020af270[];

typedef struct { uint32_t tag; uint32_t a; uint32_t b; uint8_t flag; } Loc;

void *func_0203f650(uint8_t *self, uint32_t p1, uint32_t p2) {
    uint8_t in[12];
    Loc loc;
    uint32_t off = 99 * 4;
    uint8_t *b2;
    uint8_t *sub;

    func_02056c9c(self, data_0213df18[8]);
    *(void **)self = data_020af1c8;
    *(uint32_t *)(self + 0x88) = p1;
    sub = self + 0x90;
    func_02035f58(sub + 0x14);
    func_02035f58(sub + 0x74);
    func_02035e10(sub + 0xd4);
    uint8_t *blk = self + off;
    func_02053234(blk);
    *(uint32_t *)(blk + 4) = 0;
    *(uint8_t *)(blk + 0xc) = 0;
    b2 = self + (off + 0x1c);
    *(uint32_t *)(self + (off + 0x1c)) = 0;
    *(uint32_t *)(b2 + 4) = 0;
    *(uint32_t *)(b2 + 8) = 0;
    *(uint32_t *)(self + (off + 0x30)) = 0;
    *(uint32_t *)(self + (off + 0x34)) = p2;

    uint8_t *ip = in;
    func_02005988(ip, data_020af258);
    Loc *lp = &loc;
    func_02018c48(lp, ip);
    func_020532a4(self + off, lp);

    if ((void *)&lp->a != (void *)(self + off + 4)) {
        if (*(uint32_t *)(self + (off + 4)) != 0) {
            if (*(uint8_t *)(self + (off + 0xc))) {
                func_02052d3c(*(uint32_t *)(self + (off + 4)), *(uint32_t *)(self + (off + 8)));
            }
            func_02052c04(*(uint32_t *)(self + 0x190));
        }
        uint32_t t = lp->a;
        *(uint32_t *)(self + 0x190) = t;
        *(uint32_t *)(self + 0x194) = lp->b;
        *(uint8_t *)(self + 0x198) = lp->flag;
        if (t != 0) {
            func_02052be0();
            if (*(uint8_t *)(self + 0x198)) {
                func_02052d10(*(uint32_t *)(self + 0x190), *(uint32_t *)(self + 0x194));
            }
        }
    }

    Loc *lq = &loc;
    if (lq->a != 0) {
        if (lq->flag) {
            func_02052d3c(lq->a, lq->b);
        }
        func_02052c04(lq->a);
    }
    func_02053290(lq);
    func_020059cc(in);
    {
    uint32_t x0 = data_020af270[0];
    uint32_t x1 = data_020af270[1];
    *(uint32_t *)(self + 0x80) = x0;
    *(uint32_t *)(self + 0x84) = x1;
    }
    return self;
}
