#include "ffc/types.h"

typedef struct { uint32_t x, y; } V2;
typedef struct { uint32_t f0; void *f4; void *f8; uint8_t fc; } FfcLoc;

extern void *func_0203b688(void *a);
extern void func_ov003_021565a0(void *o);
extern void func_ov003_02157b6c(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_0203b75c(uint32_t x);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t func_ov003_0214649c(void *a);
extern uint32_t func_ov003_02153cb4(uint32_t a, uint32_t x, uint32_t y);
extern uint32_t func_ov003_0214daec(void *a, uint32_t b);
extern void *func_ov003_02155b40(void *o);
extern uint32_t func_ov003_0214c118(void *a, V2 d, V2 v, uint32_t p4, uint32_t h, uint32_t q);
extern void func_02016704(FfcLoc *loc, uint32_t v);
extern uint8_t *func_02052d90(void *mar, uint32_t idx);
extern uint32_t func_0209a484(uint32_t x);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern uint32_t func_0209b108(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern uint32_t func_0209ab5c(uint32_t a);
extern uint32_t func_ov003_021462d8(void *a, V2 d);
extern uint32_t func_ov003_0215b344(void *o);
extern uint32_t func_ov003_0215b1f8(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_ov003_0215b294(void *o, uint32_t a, V2 p, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern uint32_t func_ov003_0215b394(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(FfcLoc *loc);
extern uint32_t data_ov003_02179944[2];
extern uint32_t data_ov003_0217994c[2];
extern uint32_t data_020b8e44;

void *func_ov003_0214bf10(void *a, void *obj, V2 v, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4)
{
    FfcLoc loc;
    void *ret = func_0203b688(a);
    func_ov003_021565a0(obj);
    func_ov003_02157b6c(obj, 0x14, 0, 0x1000, 0, 0, 0);
    func_02056bc0(ret, (void *)func_0203b75c(0x14));
    if (s0 != 0x80000000) {
        uint32_t t = func_ov003_02153cb4(func_ov003_0214649c(a), v.x, v.y);
        uint32_t q = func_ov003_0214daec(a, t);
        void *o = func_ov003_02155b40(obj);
        uint32_t h = *(uint16_t *)((uint8_t *)o + 0x10);
        uint32_t r = func_ov003_0214c118(a, *(V2 *)data_ov003_02179944, v, s0, h, q);
        func_02056bc0(ret, (void *)r);
    }
    func_02016704(&loc, data_020b8e44);
    uint8_t *m = func_02052d90(loc.f4, loc.f8);
    uint32_t off = *(uint32_t *)(m + 0xc);
    off = *(uint32_t *)(m + off + 8);
    uint8_t *r6 = m + off;
    struct { V2 pad; V2 pos; } ps;
    ps.pos.x = *(uint32_t *)(r6 + 4);
    ps.pos.y = *(uint32_t *)(r6 + 8);
    uint32_t f = func_0209a484(*(uint32_t *)(r6 + 0xc));
    f = func_0209b5bc(f, 0x45800000);
    f = func_0209b108(0xc2b40000, f);
    f = func_0209b5bc(f, 0x43b40000);
    f = func_0209af28(0x45800000, f);
    uint32_t ang = func_0209ab5c(f);
    uint32_t hh = *(uint16_t *)(r6 + 2);
    uint32_t r14 = func_ov003_021462d8(a, *(V2 *)data_ov003_0217994c);
    uint32_t r18 = func_0203b75c(10);
    uint32_t r1c = func_ov003_0215b344(obj);
    uint32_t r20 = func_ov003_0215b1f8(obj, 0x4000, 0x14, 0xc, 2, 2, 0);
    uint32_t r24 = func_0203b75c(0xf);
    uint32_t r6v = func_ov003_0215b294(obj, 2, ps.pos, ang, hh, 0);
    uint32_t r7v = func_02021610(0xf2, 0);
    uint32_t r28 = func_0203b75c(5);
    uint32_t r5v = func_ov003_0215b394(obj, s2, 0, 0x1000, s3, s4, 0);
    uint32_t r1e = func_02021610(0xeb, 0);
    func_02056bc0(ret, (void *)r1e);
    func_02056bc0(ret, (void *)s1);
    func_02056bc0(ret, (void *)r5v);
    func_02056bc0(ret, (void *)r28);
    func_02056bc0(ret, (void *)r7v);
    func_02056bc0(ret, (void *)r6v);
    func_02056bc0(ret, (void *)r24);
    func_02056bc0(ret, (void *)r20);
    func_02056bc0(ret, (void *)r1c);
    func_02056bc0(ret, (void *)r18);
    func_02056bc0(ret, (void *)r14);
    if (loc.f4 != 0) {
        if (loc.fc != 0) {
            func_02052d3c(loc.f4, loc.f8);
        }
        func_02052c04(loc.f4);
    }
    func_02053290(&loc);
    return ret;
}
