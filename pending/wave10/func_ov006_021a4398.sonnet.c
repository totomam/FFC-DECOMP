/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4b14(uint8_t a, uint8_t b, int c);
extern void func_ov006_021b5770(void *p, void (*f)(void));
extern void func_ov006_021a43f4(void);
void func_ov006_021a4398(void *p);
}

struct Num { int v; int w; Num(int x) : v(x), w(0) {} ~Num() {} };
inline int sub12(const Num &a) { return a.v - 12; }

void func_ov006_021a4398(void *p)
{
    uint8_t *g = data_ov006_021bc6fc;
    uint32_t val = **(uint32_t **)(g + 0x90);
    uint8_t n = val;
    int v = sub12(Num(n));
    if (v > 0x7d) {
        func_ov006_021a4b14(g[0x11d], 2, v);
        return;
    }
    func_ov006_021a4b14(g[0x11d], 2, 0x7d);
    func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 3, 0xc0);
    func_ov006_021b5770(p, func_ov006_021a43f4);
}
