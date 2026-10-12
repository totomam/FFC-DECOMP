#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Quad;

extern void func_020213b8(int32_t id);
extern void func_02084b2c(void *p, int32_t v, uint32_t n);
extern void func_ov004_0214af30(void *self, int32_t a, int32_t b);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern int32_t func_ov004_0214b9f4(void *self);
extern int32_t func_ov004_0214b9fc(void *self);
extern void *func_02056830(uint32_t size);
extern void func_ov004_0214b554(void **out, Quad q);
extern void func_02056858(void *p);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_ov004_0214b7e8(void *self, Quad q);
extern int32_t data_ov004_02158cd4[];

#define FLD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))

void func_ov004_0214b388(void *self, Quad r)
{
    uint32_t flag;
    int32_t size;
    void *out;
    int32_t *d;
    int32_t k;
    int32_t x, y, ox, oy;
    Quad A, B, C;

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
        x = r.c - d[9];
        y = r.d - d[10];
        ox = FLD(int32_t, self, 0xa0) - d[9];
        oy = FLD(int32_t, self, 0xa4) - d[10];
        A.a = ox * 8 + ((oy & 1) * 8) + 4;
        A.b = oy * 8 + 4;
        A.c = x * 8 + ((y & 1) * 8) + 4;
        A.d = y * 8 + 4;
        B.a = A.c;
        B.b = A.d;
        B.c = A.a;
        B.d = A.b;
        k += 0xff;
        C.a = 0;
        C.b = 0;
        C.c = k;
        C.d = 0xc0;
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
