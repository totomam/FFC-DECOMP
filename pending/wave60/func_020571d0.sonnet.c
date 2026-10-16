/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
extern "C" uint32_t func_020817c8(int32_t first, int32_t second);
extern "C" int32_t func_02081210(int32_t a, int32_t b);
extern "C" void func_020571d0(int32_t *p, int32_t i);
struct Buf { int32_t v[17]; Buf() {} ~Buf() {} };
void func_020571d0(int32_t *p, int32_t i) {
    Buf buf;
    int32_t n = p[7] - 1;
    if (i == n) {
        p[13] = p[15];
        return;
    }
    int32_t d = n << 12;
    int32_t q = func_020817c8(1 << 12, i << 12);
    q = func_02081210(q, d);
    int32_t a = p[14];
    p[13] = a + func_020817c8(p[15] - a, q);
}
