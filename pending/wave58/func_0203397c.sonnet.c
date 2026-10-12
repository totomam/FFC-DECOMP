#include "ffc/types.h"

extern void *func_0203b81c(uint32_t a);
extern void *func_0205f8e0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t a);
extern void *func_02020020(void *a, uint32_t b, uint32_t c, uint32_t d);
typedef struct { int32_t x, y, w, h; } Rect;
typedef struct { int32_t x, y; } Pt;
typedef struct { int32_t a, b, c; } Str;
extern void func_0202044c(void *obj, Rect r);
extern void *func_02062a30(void *owner);
extern uint32_t func_02015a38(void *h, uint32_t a, uint32_t b, uint32_t c);
extern void func_020095b8(void *out, void *src);
extern void func_0206139c(Pt *out, uint32_t a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern uintptr_t func_020159f8(void *h);
extern void *func_0203ba60(void *o, Pt p, uint32_t c, uint32_t d);
extern void *func_0203b878(void *o, uint32_t a);
extern void func_02068d58(void *o, int32_t a, int32_t b);
extern void func_02068ddc(void *o, void *a);
extern void *func_02033824(void *a, void *b, uint32_t c);
extern void func_020695ec(void *o, void *a);
extern void func_020697ac(void *o, void *a);
extern void *data_020b8e44;

#define FLD(T, off) (*(T *)(self + (off)))

void func_0203397c(uint8_t *self) {
    Rect ra, rb, rc;
    Pt p1, p2, p3, po;
    Str s1, s2;
    void *r6, *t, *p4, *x;
    int32_t h, w, a, b, c, d, n, i, idx;
    uint32_t v, hh;

    h = 8;
    r6 = func_0203b81c(8);
    *((uint8_t *)r6 + 0x3c) = 1;
    t = func_0205f8e0();
    func_02056bc0(self + 0x14, t);
    n = 0;
    w = 0x12;
    if (self == 0) { n = 1; w = 3; h = 5; }
    a = (0x20 - w) / 2;
    b = (0x18 - h) / 2;
    c = w + (a - n);
    d = h + (b - n);
    rc.w = c; rc.h = d;
    rb.w = w; rb.h = h; rb.x = a; rb.y = b;
    ra.x = a; ra.y = b; ra.w = w; ra.h = h;
    p3.x = n; p3.y = n;
    p1.x = n; p1.y = n;
    rc.x = a; rc.y = b;
    x = func_0205681c(0x8c);
    if (x != 0) {
        x = func_02020020(x, 0, 1, 0);
    }
    FLD(void *, 0xb8) = x;
    func_0202044c(FLD(void *, 0xb8), rc);
    {
        void **vt = *(void ***)FLD(void *, 0xb8);
        ((void (*)(void *, int))vt[8])(FLD(void *, 0xb8), 0);
    }
    n = 0;
    p2.x = n; p2.y = n;
    {
        void **vt = *(void ***)FLD(void *, 0xb8);
        ((void (*)(void *, int, int))vt[3])(FLD(void *, 0xb8), p2.x, p2.y);
    }
    func_02056bc0(self + 0x48, FLD(void *, 0xb8));
    t = func_02062a30(FLD(void *, 0xb8));
    func_02056bc0(self + 0x14, t);
    hh = func_02015a38(data_020b8e44, 0, 10, 0);

    if (*(uint32_t *)(self + 0xc4) & 1) {
        v = FLD(uint32_t, 0xc8);
    } else {
        v = (*(uint8_t *)(self + 0xc4) >> 1) & 0x7f;
    }
    if (v != 0) {
        func_020095b8(&s2, self + 0xc4);
        func_0206139c(&po, hh, &s2, 0, 0);
        func_020059cc(&s2);
        c = (int32_t)func_020159f8(data_020b8e44);
        func_0203ba60(r6, po, c, 1);
        p4 = func_0203b878(r6, hh);
        {
            void **vt = *(void ***)p4;
            ((void (*)(void *, int))vt[8])(p4, 0);
        }
        func_020095b8(&s1, self + 0xc4);
        func_02068d58(p4, 0x80 - (po.x / 2), rb.y * 8 + 8);
        func_02068ddc(p4, &s1);
        func_020059cc(&s1);
        {
            void **vt = *(void ***)p4;
            ((void (*)(void *))vt[10])(p4);
        }
        func_02056bc0(self + 0x48, p4);
    }
    for (i = 0; i < 2; i++) {
        x = func_0205681c(0x9c);
        if (x != 0) {
            x = func_02033824(x, r6, i == 0 ? 1 : 0);
        }
        FLD(void *, 0xbc + i * 4) = x;
        func_020695ec(self, FLD(void *, 0xbc + i * 4));
    }
    if (FLD(void *, 0xd0)) {
        idx = *(int32_t *)FLD(void *, 0xd0);
    } else {
        idx = FLD(int32_t, 0xd4);
    }
    func_020697ac(self, FLD(void *, 0xbc + idx * 4));
    func_02056bc0(self + 0x48, r6);
}
