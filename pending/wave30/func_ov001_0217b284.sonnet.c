/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_ov001_02190e6c[];
extern void func_ov001_0217ef6c(void *a, void *b);
extern void *func_ov000_021658c0(uint32_t x);
extern int32_t func_ov000_0216888c(void *a, void **b, void *c, uint32_t d, uint32_t e);
extern uint32_t *func_ov000_0216876c(void *a);
extern void func_ov000_021653f4(void *h);
extern void func_ov001_0217b1bc(void);
uint32_t func_ov001_0217b284(void *p0, void *p1, uint32_t p2, uint32_t *p3);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" uint32_t func_ov001_0217b284(void *p0, void *p1, uint32_t p2, uint32_t *p3)
{
    void *h;
    int32_t res;
    Num zero(0);

    if (p2 == 0) {
        func_ov001_0217ef6c(p0, data_ov001_02190e6c);
        return 2;
    }
    h = func_ov000_021658c0(p2);
    res = func_ov000_0216888c(p1, &h, (void*)func_ov001_0217b1bc, zero.v, 1);
    if (res != diff(zero, 1)) {
        *p3 = func_ov000_0216876c(p1)[1];
    }
    func_ov000_021653f4(h);
    h = 0;
    return 0;
}
