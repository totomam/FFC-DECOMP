#include "ffc/types.h"

extern int32_t func_ov000_0214e984(void *p, int32_t k);
extern void func_ov000_0214f1f4(int32_t a, void *out);
extern int32_t func_ov006_021a0bb8(int32_t a, void *s, void *out, int32_t b, int32_t c);

typedef struct {
    uint8_t a;
    uint8_t b;
    uint16_t c;
    int32_t d;
} S;

typedef struct {
    uint32_t out;
    S s;
} W;

int32_t func_ov006_021a0bd0(int32_t a, int32_t b, int32_t c)
{
    W w;
    int32_t t;
    uint8_t v;

    w.s.a = 8;
    v = 2;
    w.s.b = v;
    w.s.d = v - 3;
    w.s.c = 0x1e6;
    t = func_ov000_0214e984(&w.out, 0x1e6);
    func_ov000_0214f1f4(t, &w.out);
    return func_ov006_021a0bb8(a, &w.s, &w.out, b, c);
}
