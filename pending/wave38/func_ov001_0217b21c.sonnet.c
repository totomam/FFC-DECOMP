/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int32_t func_ov001_0217ef6c(void *a, void *b);
extern void *func_ov000_021658c0(void *a);
extern uint32_t func_ov000_0216888c(void *a, void *b, void *c, int32_t d, int32_t e);
extern void *func_ov000_0216876c(void *a);
extern void func_ov000_021653f4(void *a);
extern int32_t func_ov001_0217b1bc(void);
extern uint8_t data_ov001_02190e6c[];
int32_t func_ov001_0217b21c(void *a, void *b, void *c, void *d);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
int32_t func_ov001_0217b21c(void *a, void *b, void *c, void *d)
{
    void *local;
    if (c == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190e6c);
        return 2;
    }
    local = func_ov000_021658c0(c);
    int n = 0;
    uint32_t r = func_ov000_0216888c(b, &local, (void*)func_ov001_0217b1bc, 0, 1);
    if ((int)r + 1 != n) {
        void *p = func_ov000_0216876c(b);
        func_ov000_021653f4(((void **)p)[1]);
        ((void **)p)[1] = func_ov000_021658c0(d);
    }
    func_ov000_021653f4(local);
    local = 0;
    return 0;
}
