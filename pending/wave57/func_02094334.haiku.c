#include "ffc/types.h"

typedef struct {
    uint8_t kind;
    uint8_t pad1;
    uint16_t f2;
    uint8_t f4;
    uint8_t f5;
} Out;

extern uint32_t func_02090270(uint32_t unused, uint32_t flags);
extern int func_0209a1c8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern int func_02090288(uint32_t a, uint32_t b);
extern uint64_t func_020996c0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint64_t func_02096cf8(uint32_t a, uint32_t b, uint32_t *out);
extern int func_020901fc(uint32_t lo, uint32_t hi);
extern void func_02093e54(uint8_t *dst, uint32_t v);
extern uint64_t func_02096d78(uint32_t a, uint32_t b, uint32_t c);
extern uint64_t func_0209ac1c(void);
extern void func_02093c88(uint8_t *dst, uint32_t lo, uint32_t hi);
extern void func_02093cfc(Out *dst, uint8_t *src, uint8_t *aux);

void func_02094334(Out *out, uint32_t a, uint32_t b) {
    uint8_t kind;
    uint32_t s10;
    uint8_t s14[0x24];
    uint8_t s38[0x28];
    uint64_t r;
    uint32_t lo, hi;
    int d;

    kind = func_02090270(a, b) != 0;

    if (func_0209a1c8(0, 0, a, b) == 0) {
        out->f2 = 0;
        out->f4 = 1;
        out->kind = kind;
        out->f5 = 0;
        return;
    }
    d = func_02090288(a, b);
    if (d <= 2) {
        out->f2 = 0;
        out->f4 = 1;
        out->kind = kind;
        out->f5 = (func_02090288(a, b) == 1) ? 0x4e : 0x49;
        return;
    }
    if (kind != 0) {
        r = func_020996c0(0, 0, a, b);
        a = (uint32_t)r;
        b = (uint32_t)(r >> 32);
    }
    r = func_02096cf8(a, b, &s10);
    lo = (uint32_t)r;
    hi = (uint32_t)(r >> 32);
    {
        uint32_t c = 0x35 - func_020901fc(lo, 0x100000u | hi);
        func_02093e54(s14, s10 - c);
        r = func_02096d78(lo, hi, c);
        r = func_0209ac1c();
        func_02093c88(s38 + 2, (uint32_t)r, (uint32_t)(r >> 32));
        func_02093cfc(out, s38 + 2, s14);
    }
    out->kind = kind;
}
