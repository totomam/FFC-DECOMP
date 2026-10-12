/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { uint8_t v; B(uint8_t x) : v(x) {} };
extern "C" {
void func_ov004_02151f2c(void *a, uint32_t b, B c);

void func_ov004_0215223c(void *p);
void func_0200d5ec(void *p);
void func_02065874(void *p);
void func_02056844(void *p);
void func_ov004_021509bc(uint8_t *p);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
void func_ov004_021509bc(uint8_t *p)
{
    B flag(0);
    p[0x131] = 0;
    func_ov004_02151f2c(p + 0x10c, *(uint32_t *)(p + 0x110), flag);
    int n = *(int *)(p + 0x11c);
    *(int *)(p + 0x11c) = diff(n, n);
    int m = *(int *)(p + 0x128);
    *(int *)(p + 0x128) = diff(m, m);
    uint8_t *q = *(uint8_t **)(p + 0x134);
    if (q) {
        func_ov004_0215223c(q + 0x2c);
        func_0200d5ec(q + 0x20);
        func_0200d5ec(q + 0x14);
        func_02065874(q + 8);
        func_02056844(q);
        *(uint32_t *)(p + 0x134) = 0;
    }
}
