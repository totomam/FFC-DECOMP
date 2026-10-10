/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void *data_ov006_021bc700;
extern void func_ov006_021a5b40(int a, int b);
extern void func_ov006_021a5544(void);
extern void func_ov006_021b5770(void *a, void (*cb)(void));
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, const Num &b) { return a.v - b.v; }
extern "C" void func_ov006_021a54fc(void *a)
{
    uint32_t *p = (uint32_t *)data_ov006_021bc700;
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0x10);
    uint8_t v = (uint8_t)*q;
    int d = diff(v, 12);

    if (d > 0x4c) {
        func_ov006_021a5b40(0, d);
        return;
    }
    func_ov006_021a5b40(0, 0x4c);
    func_ov006_021a5b40(1, 0xc0);
    func_ov006_021b5770(a, func_ov006_021a5544);
}
