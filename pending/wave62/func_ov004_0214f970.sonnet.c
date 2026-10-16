/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
struct Num { int v; int pad[6]; Num(int x) : v(x) {} ~Num() {} };
extern "C" uint32_t func_020817c8(int32_t first, int32_t second);
extern "C" void func_01ffe554(uint32_t x);
extern "C" P data_ov004_021596ac;
inline int get(const Num &n) { return n.v; }
extern "C" void func_ov004_0214f970(uint8_t *p)
{
    int32_t r = func_020817c8(*(int32_t*)(p + 0xec), 0xecd);
    *(int32_t*)(p + 0xec) = r;
    Num n(r);
    if (get(n) > 0x1000) {
        func_01ffe554(*(uint32_t*)(p + 0x90));
        return;
    }
    *(P*)(p + 0x80) = data_ov004_021596ac;
}
