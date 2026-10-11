/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct S { uint8_t pad[0x14]; uint32_t h; uint16_t cnt; uint8_t p2[1]; uint8_t v; };
extern "C" {
extern S *data_ov006_021bc7f8;
extern uint32_t func_ov006_021b5774(uint32_t x);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*f)(void), uint32_t b, uint32_t c);
extern void func_ov006_021b17d4(void);
void func_ov006_021b15c0(int a);
void func_ov006_021b15c0(int a)
{
    data_ov006_021bc7f8->v = ~diff(a, a);
    data_ov006_021bc7f8->cnt++;
    if (data_ov006_021bc7f8->cnt >= 0x78) {
        func_ov006_021b5774(0);
        data_ov006_021bc7f8->h = func_ov006_021b570c(1, func_ov006_021b17d4, 0, 0x78);
    }
}
}
