#include "ffc/types.h"

extern void *func_0203b81c(uint32_t a);
extern void *func_0205f8e0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t a);
extern void *func_02020020(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0202044c(void *obj, int32_t a, int32_t b, int32_t c, int32_t d);
extern void *func_02062a30(void *owner);
extern uint32_t func_02015a38(void *h, uint32_t a, uint32_t b, uint32_t c);
extern void func_020095b8(void *out, void *src);
extern void func_0206139c(void *out, uint32_t a, void *b, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern uintptr_t func_020159f8(void *h);
extern void *func_0203ba60(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0203b878(void *o, uint32_t a);
extern void func_02068d58(void *o, int32_t a, int32_t b);
extern void func_02068ddc(void *o, void *a);
extern void *func_02033824(void *a, void *b, uint32_t c);
extern void func_020695ec(void *o, void *a);
extern void func_020697ac(void *o, void *a);
extern void *data_020b8e44;

#define FLD(T, off) (*(T *)(self + (off)))

void func_0203397c(uint8_t *self) {
    int32_t s[27];
    void *r6, *t, *p4;
    int32_t h, r3v, a, b, c, d, n, i, idx;
    uint32_t v;
    void *x;

    h = 8;
    r6 = func_0203b81c(h);
    *((uint8_t *)r6 + 0x3c) = 1;
    t = func_0205f8e0();
    func_02056bc0(self + 0x14, t);
    n = 0;
    r3v = 0x12;
    a = (0x20 - r3v) / 2;
    b = (0x18 - h) / 2;
    c = r3v + (a - n);
    d = h + (b - n);
    s[25] = c;
    s[26] = d;
    s[15] = r3v;
    s[16] = h;
    s[13] = a;
    s[14] = b;
    s[1] = a;
    s[2] = b;
    s[3] = r3v;
    s[4] = h;
    s[9] = n;
    s[10] = n;
    s[5] = n;
    s[6] = n;
    s[23] = a;
    s[24] = b;
    x = func_0205681c(0x8c);
    if (x != 0) {
        x = func_02020020(x, 0, 1, 0);
    }
    FLD(void *, 0xb8) = x;
    func_0202044c(FLD(void *, 0xb8), s[23], s[24], s[25], s[26]);
    {
        void **vt = *(void ***)FLD(void *, 0xb8);
        ((void (*)(void *, int))vt[8])(FLD(void *, 0xb8), 0);
    }
    s[7] = 0;
    s[8] = 0;
    {
        void **vt = *(void ***)FLD(void *, 0xb8);
        ((void (*)(void *, int, int))vt[3])(FLD(void *, 0xb8), s[7], s[8]);
    }
    func_02056bc0(self + 0x48, FLD(void *, 0xb8));
    t = func_02062a30(FLD(void *, 0xb8));
    func_02056bc0(self + 0x14, t);
    n = func_02015a38(data_020b8e44, 0, 10, 0);

    if (*(uint32_t *)(self + 0xc4) & 1) {
        v = FLD(uint32_t, 0xc8);
    } else {
        v = (*(uint8_t *)(self + 0xc4) >> 1) & 0x7f;
    }
    if (v != 0) {
        func_020095b8(&s[20], self + 0xc4);
        func_0206139c(&s[11], n, &s[20], 0, 0);
        func_020059cc(&s[20]);
        s[0] = (int32_t)func_020159f8(data_020b8e44);
        func_0203ba60(r6, s[11], s[12], s[0], 1);
        p4 = func_0203b878(r6, n);
        {
            void **vt = *(void ***)p4;
            ((void (*)(void *, int))vt[8])(p4, 0);
        }
        func_020095b8(&s[17], self + 0xc4);
        func_02068d58(p4, 0x80 - (s[11] / 2), s[14] * 8 + 8);
        func_02068ddc(p4, &s[17]);
        func_020059cc(&s[17]);
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
