#include "ffc/types.h"
typedef struct { uint8_t a; uint8_t b; uint16_t c; int32_t d; } S;
typedef struct { uint32_t o; S s; } T;
extern int32_t func_ov000_0214e984(void);
extern void func_ov000_0214f1f4(int32_t r, uint32_t *o);
extern void func_ov006_021a0bb8(int32_t a, S *s, T *o, int32_t b, int32_t c);
void func_ov006_021a0bd0(int32_t a, int32_t b, int32_t c) {
    T t;
    t.s.a = 8;
    t.s.b = 2;
    t.s.d = -1;
    t.s.c = 0x1e6;
    func_ov000_0214f1f4(func_ov000_0214e984(), &t.o);
    func_ov006_021a0bb8(a, &t.s, (T*)((char*)&t.s - 4), b, c);
}
