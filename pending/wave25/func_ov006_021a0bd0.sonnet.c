#include "ffc/types.h"

extern int32_t func_ov000_0214e984();
extern void func_ov000_0214f1f4(int32_t a, void *out);
extern int32_t func_ov006_021a0bb8(int32_t a, void *s, void *out, int32_t b, int32_t c);

typedef struct {
    uint32_t out;
    uint8_t a;
    uint8_t b;
    uint16_t c;
    int32_t d;
} W;

int32_t func_ov006_021a0bd0(int32_t a, int32_t b, int32_t c)
{
    W w;
    w.a = 8;
    w.b = 2;
    w.d = -1;
    w.c = 0x1e6;
    func_ov000_0214f1f4(func_ov000_0214e984(), &w);
    return func_ov006_021a0bb8(a, &w.a, (uint8_t*)&w.a - 4, b, c);
}
