/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t *data_ov006_021bc6fc;
void func_ov006_021a4b14(uint8_t a, int b, int c);
void func_ov006_021b5770(int a, void (*fn)(void));
void func_ov006_021a51f8(void);
void func_ov006_021a51bc(int a);
}
struct Num { int v; int w; Num(int x) : v(x), w(0) {} ~Num() {} };
inline int get(const Num &a) { return a.v; }
void func_ov006_021a51bc(int a)
{
    uint8_t *p = data_ov006_021bc6fc;
    uint8_t idx = (uint8_t)**(uint32_t **)(p + 0x30);
    int n = get(Num(idx + 12));
    func_ov006_021a4b14(p[0x11d], 0, n);
    if (n >= 0xc0) {
        func_ov006_021b5770(a, func_ov006_021a51f8);
    }
}
