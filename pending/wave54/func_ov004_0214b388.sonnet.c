/* cflags: -lang c++ */
#include "ffc/types.h"

struct Quad {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
};

extern "C" void func_020213b8(int32_t id);
extern "C" void func_02084b2c(void *p, int32_t v, uint32_t n);
extern "C" void func_ov004_0214af30(void *self, int32_t a, int32_t b);
extern "C" void func_02084ca4(void *dst, void *src, uint32_t n);
extern "C" int32_t func_ov004_0214b9f4(void *self);
extern "C" int32_t func_ov004_0214b9fc(void *self);
extern "C" void *func_02056830(uint32_t size);
extern "C" void func_ov004_0214b554(void **out, Quad q);
extern "C" void func_02056858(void *p);
extern "C" uint32_t func_020817c8(int32_t first, int32_t second);
extern "C" void func_ov004_0214b7e8(void *self, Quad q);
extern "C" int32_t data_ov004_02158cd4[];

struct P { int32_t x, y; ~P() {} };
static inline P conv(P *p) { P r; r.x = p->x * 8 + ((p->y & 1) * 8) + 4; r.y = p->y * 8 + 4; return r; }
#define FLD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))

extern "C" void func_ov004_0214b388(void *self, Quad r)
{
    uint32_t flag;
    int32_t size;
    void *out;
    int32_t *d;
    int32_t k;
    int32_t x, y, ox, oy;

    if (FLD(uint8_t, self, 0x94)) {
        flag = 1 << 12;
        FLD(int32_t, self, 0xb0) = 1;
        func_020213b8(0x93);
    } else {
        flag = 2 << 10;
        FLD(int32_t, self, 0xb0) = 1;
        func_020213b8(0x92);
    }

    size = FLD(int32_t, self, 0xb4) * FLD(int32_t, self, 0xb8);

    if (r.c == FLD(int32_t, self, 0xa0) && r.d == FLD(int32_t, self, 0xa4)) {
        func_02084b2c(FLD(void *, self, 0xac), 0, size);
        func_02084b2c(FLD(void *, self, 0xa8), 0, size);
        func_ov004_0214af30(self, r.c, r.d);
    } else {
        func_02084ca4(FLD(void *, self, 0xa8), FLD(void *, self, 0xac), size);
        func_02084b2c(FLD(void *, self, 0xa8), 0, size);

        k = 1;
        size = func_ov004_0214b9f4(self) * func_ov004_0214b9fc(self);
        out = func_02056830(size * k);
        func_02084b2c(out, 0, func_ov004_0214b9f4(self) * func_ov004_0214b9fc(self));

        d = data_ov004_02158cd4;
        P p1, p2;
        p1.x = r.c; p1.y = r.d;
        p1.x -= d[9]; p1.y -= d[10];
        p2.x = FLD(int32_t, self, 0xa0); p2.y = FLD(int32_t, self, 0xa4);
        p2.x -= d[9]; p2.y -= d[10];
        P s1 = conv(&p1);
        P s2 = conv(&p2);
        Quad C;
        C.a = 0; C.b = 0; C.c = k + 0xff; C.d = 0xc0;
        Quad A;
        A.a = s2.x; A.b = s2.y; A.c = s1.x; A.d = s1.y;
        Quad B;
        B.a = s1.x; B.b = s1.y; B.c = s2.x; B.d = s2.y;
        func_ov004_0214b554(&out, C);
        if (out != 0) {
            func_02056858(out);
            out = 0;
        }
    }

    FLD(Quad, self, 0x98) = r;

    func_020817c8(data_ov004_02158cd4[4], flag);
    func_ov004_0214b7e8(self, r);
}
