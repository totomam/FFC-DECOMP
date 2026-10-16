/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_ov001_02190e6c;
extern void func_ov001_0217ef6c(uint32_t a, void *b);
extern uint32_t func_ov000_021658c0(uint32_t a);
extern int func_ov000_0216888c(uint32_t a, uint32_t *b, void *c, int d, int e);
extern uint32_t *func_ov000_0216876c(uint32_t a);
extern void func_ov000_021653f4(uint32_t a);
extern void func_ov001_0217b1bc(void);
int func_ov001_0217b21c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
int func_ov001_0217b21c(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t k[2];
#define v k[0]

    uint32_t *p;
    if (c == 0) {
        func_ov001_0217ef6c(a, &data_ov001_02190e6c);
        return 2;
    }
    v = func_ov000_021658c0(c);
    int n = 0;
    int r = func_ov000_0216888c(b, &v, (void*)func_ov001_0217b1bc, 0, 1);
    int m = diff(n, 1);
    if (r != m) {
        p = func_ov000_0216876c(b);
        func_ov000_021653f4(p[1]);
        p[1] = func_ov000_021658c0(d);
    }
    func_ov000_021653f4(v);
    v = 0;
    return 0;
}
