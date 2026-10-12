#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_02056c9c(void *obj, uint32_t x);
extern void func_02005988(void *dst, void *src);
extern void func_0205d508(void *obj, void *src, uint32_t n);
extern void func_020059cc(void *object);
extern void func_0203c2bc(void);
extern void func_0206047c(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0200b8bc(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203bbd8(uint32_t a, void *obj, uint32_t b, uint32_t c, uint32_t d);
extern void func_0206286c(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uintptr_t func_020159f8(uintptr_t v);
extern void *func_0203ba18(void *a, Pair p, void *ip, uint32_t five);
extern void *func_0203b884(void *a, void *b, Pair p, uint32_t x);
extern void func_020686d0(void *p);
extern void *func_0203b828(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);

extern uint8_t data_ov002_021d73f8[];
extern uint8_t data_ov002_021d7448[];
extern uint8_t data_0213df18[];
extern uint8_t data_020b8e44[];
extern uint8_t data_ov002_021d73e4[];
extern uint8_t data_ov002_021d73c0[];

#define FLD(o, off) (*(void **)((uint8_t *)(o) + (off)))
#define VCALL(o, idx) (((void **)*(void **)(o))[idx])

void *func_ov002_021c5388(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t r6 = 0;
    uint32_t r7 = 0;
    Pair s1, s2, pa, pb;
    uint8_t tmp[12];
    void *e;
    void *ret;
    void *obj;
    uint8_t *n;

    *(void **)p = data_ov002_021d73f8;
    func_02056c9c(p, 0);
    func_02005988(tmp, data_ov002_021d7448);
    func_0205d508(p + 0x80, tmp, 7);
    func_020059cc(tmp);
    func_0203c2bc();
    func_0206047c();
    e = func_0205681c(0x28);
    if (e != 0) {
        e = func_0200b8bc(e, r6, 1, r6, 1);
    }
    ret = (void *)func_0203bbd8(func_0204f7d4(*(void **)data_0213df18), p + 0x80, 1, r7, r7);
    FLD(p, 0xb8) = ret;
    func_0206286c(ret, 0, 0x1c);
    obj = FLD(p, 0xb8);
    ((void (*)(void *, uint32_t))VCALL(obj, 8))(obj, 1);
    func_02056bc0(p + 0x48, FLD(p, 0xb8));
    obj = FLD(p, 0xb8);
    r6 = 2;
    *(uint32_t *)((uint8_t *)obj + 0xc) = (*(uint32_t *)((uint8_t *)obj + 0xc) & ~0xffu) | r6;
    FLD(p, 0xb8) = 0;
    ret = (void *)func_0203bbd8(func_0204f7d4(*(void **)data_0213df18), p + 0x80, 1, r7, r7);
    FLD(p, 0xb8) = ret;
    func_0206286c(ret, 0, 0x80);
    obj = FLD(p, 0xb8);
    ((void (*)(void *, uint32_t))VCALL(obj, 8))(obj, 1);
    func_02056bc0(p + 0x48, FLD(p, 0xb8));

    pa.a = r7;
    pa.b = 4;
    pb.a = 0xd8;
    pb.b = 0x30;
    r6 = r6 << 12;
    ret = (void *)func_0204f7d4(*(void **)data_0213df18);
    {
        uintptr_t ip = func_020159f8(*(uintptr_t *)data_020b8e44);
        void *t = func_0203ba18(ret, pb, (void *)ip, 1);
        ret = func_0203b884(t, e, pa, r6);
    }
    FLD(p, 0xbc) = ret;
    n = (uint8_t *)func_0205681c(0x18);
    if (n != 0) {
        *(void **)n = data_ov002_021d73e4;
        *(void **)(n + 8) = e;
        *(void **)(n + 0xc) = p;
        n[0x14] = 1;
        n[0x15] = 0;
    }
    func_020686d0(FLD(p, 0xbc));
    s1.a = 0x10;
    s1.b = 0x8a;
    obj = FLD(p, 0xbc);
    ((void (*)(void *, Pair))VCALL(obj, 3))(obj, s1);
    obj = FLD(p, 0xbc);
    ((void (*)(void *, uint32_t))VCALL(obj, 8))(obj, 0);
    obj = FLD(p, 0xbc);
    ((void (*)(void *))VCALL(obj, 11))(obj);
    func_02056bc0(p + 0x48, FLD(p, 0xbc));

    e = func_0203b828(func_0204f7d4(*(void **)data_0213df18), 1, 1, 1);
    ret = func_0203b95c(*(uint32_t *)(data_ov002_021d73c0 + 4), e, 0, 1);
    FLD(p, 0xc8) = ret;
    s2.a = 0x86;
    s2.b = 0x5c;
    ((void (*)(void *, Pair))VCALL(ret, 3))(ret, s2);
    obj = FLD(p, 0xc8);
    ((void (*)(void *, uint32_t, uint32_t))VCALL(obj, 14))(obj, 1, 0);
    func_02056bc0(p + 0x48, FLD(p, 0xc8));
    func_02056bc0(p + 0x48, e);
    return self;
}
