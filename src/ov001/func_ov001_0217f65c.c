/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int32_t func_ov001_0217f520(uint32_t a, void *b);
extern int32_t func_02093b18(int32_t x);
extern int32_t func_ov001_0217f594(int32_t a, int32_t b, int32_t c);
extern uint32_t *func_ov000_0216876c(uint32_t *obj, int32_t idx);
extern void func_ov001_0217f8ac(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern uint8_t data_ov001_02191988[];
extern uint8_t data_ov001_0219197c[];
extern uint32_t data_ov001_02194c38[];
void func_ov001_0217f65c(uint32_t param);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
void func_ov001_0217f65c(uint32_t param)
{
    int32_t r4, r1, r6;
    uint32_t *obj;
    r4 = func_02093b18(func_ov001_0217f520(param, data_ov001_02191988));
    r1 = func_02093b18(func_ov001_0217f520(param, data_ov001_0219197c));
    r6 = func_ov001_0217f594(3, r1, 0);
    int32_t r5 = 0;
    int32_t n = r5;
    if (r6 != diff(n, 1)) {
        obj = func_ov000_0216876c((uint32_t *)data_ov001_02194c38[5], r6);
        obj[2] = r4;
        if (r4 > 0) r5 = 1;
        func_ov001_0217f8ac(r6, r5, 0, 0, 0);
    }
}
