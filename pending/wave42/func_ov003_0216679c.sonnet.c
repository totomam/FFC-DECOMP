/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint32_t func_020424e0(uint32_t);
extern uint16_t func_ov003_021481c0(uint16_t);
extern uint32_t func_ov003_021464f4(uint32_t);
extern void func_ov003_02157b6c(uint32_t, uint16_t, uint8_t, uint32_t, uint16_t, uint32_t, uint8_t);
extern uint32_t func_020816d4(uint32_t, uint32_t);
extern void func_ov003_02158264(uint32_t, int32_t, uint32_t, uint32_t);
extern uint32_t func_02022e58(uint32_t);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_02056aec(void *);
}
struct S { uint8_t pad[0x14]; uint8_t sub[0x6c]; uint32_t h80; uint8_t b84; uint8_t b85; volatile uint16_t h86; uint16_t h88; uint16_t h8a; uint32_t w8c; };
struct G { int v; G(int x):v(x){} ~G(){} };
inline uint32_t gl(const uint32_t &x) { return x; }
extern "C" void func_ov003_0216679c(S *self)
{
    uint32_t p = func_020424e0(self->h80);
    self->h86 = func_ov003_021481c0(self->h86);
    if (self->h86 != 0) {
        uint32_t r7 = func_ov003_021464f4(p);
        if (r7 != 0) {
            G g(0);
            uint32_t a = self->w8c;
            uint16_t b = self->h8a;
            func_ov003_02157b6c(r7, self->h88, self->b84, gl(a), b, g.v, self->b85);
            uint32_t r6 = func_020816d4(0x1000, 0xfff9c000);
            uint32_t v = func_020816d4(0xfffff000, 0);
            int32_t t = (int32_t)(((1 << 14) - r6) * 360);
            func_ov003_02158264(r7, t >> 4, v, 1);
        }
    }
    uint32_t n = func_02022e58(*(uint32_t *)(p + 0x178));
    func_02056bc0(self->sub - 0 , n);
    n = func_02056aec(self);
    func_02056bc0(self->sub, n);
}
