#include "ffc/types.h"

typedef struct {
    uint8_t kind;
    uint8_t pad1;
    uint16_t f2;
    uint8_t f4;
    uint8_t f5;
} Out;

extern uint32_t func_02090270(double x);
extern int func_02090288(double x);
extern double func_02096cf8(double x, int *out);
extern int func_020901fc(uint64_t v);
extern void func_02093e54(uint8_t *dst, int v);
extern int64_t func_02096d78(double x, int e);
extern void func_02093c88(uint8_t *dst, double d);
extern void func_02093cfc(Out *dst, uint8_t *src, uint8_t *aux);

void func_02094334(Out *out, double x) {
    uint8_t kind;
    int s10;
    uint8_t s38[0x28];
    uint8_t s14[0x24];
    double m;
    union { double d; uint64_t u; } bits;
    uint64_t v;
    int c;

    kind = func_02090270(x) != 0;
    if (x == 0.0) {
        out->f2 = 0;
        out->f4 = 1;
        out->kind = kind;
        out->f5 = 0;
        return;
    }
    if (func_02090288(x) <= 2) {
        out->f2 = 0;
        out->f4 = 1;
        out->kind = kind;
        out->f5 = (func_02090288(x) == 1) ? 0x4e : 0x49;
        return;
    }
    if (kind) x = -x;
    m = func_02096cf8(x, &s10);
    bits.d = m;
    v = bits.u | ((uint64_t)0x100000 << 32);
    v = (v & -v) - 1;
    c = 0x35 - func_020901fc(v);
    func_02093e54(s14, s10 - c);
    func_02093c88(s38 + 2, (double)func_02096d78(m, c));
    func_02093cfc(out, s38 + 2, s14);
    out->kind = kind;
}
