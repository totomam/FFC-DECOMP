/* cflags: -lang c++ */
#include "ffc/types.h"
struct G { uint32_t v; uint32_t w; G(uint32_t x) : v(x), w(x) {} ~G() {} };
inline uint32_t get(const G &g) { return g.v; }
extern "C" {
extern void *data_ov006_021bc700;
extern void *func_ov006_021b3bf8(void *p, int x);
extern void func_ov006_021a5b40(int a, int b);
extern void func_ov006_021b5770(void *p, void *fn);
extern void func_ov006_021a5e54(void);
void func_ov006_021a5e18(void *a);
void func_ov006_021a5e18(void *a)
{
    uint32_t t = *(uint32_t *)func_ov006_021b3bf8(*(void **)((char *)data_ov006_021bc700 + 0x40), 0);
    int r5 = (uint8_t)get(t) + 0xc;
    func_ov006_021a5b40(4, r5);
    if (r5 >= 0xc0) {
        func_ov006_021b5770(a, (void *)func_ov006_021a5e54);
    }
}
}
