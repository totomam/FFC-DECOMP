/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct Obj { virtual ~Obj(); };
extern "C" {
extern uint8_t data_0209dea8;
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02054144(uint32_t a);
extern void func_ov003_02178bfc(uint8_t *p, uint32_t i);
void func_ov003_02178a3c(uint8_t *p);
}

void func_ov003_02178a3c(uint8_t *p)
{
    uint8_t i;
    uint32_t r;

    if (p[0xc6] != 0) {
        int n = data_0209dea8; int32_t z = diff(n, n);
        r = (uint32_t)(func_0209a76c(data_0209dea8 - 1, 3) >> 32);
        r += 2;
        if (*(int32_t *)(p + 0xa0 + ((r & 2) << 3)) > z) {
            return;
        }
        if (*(Obj **)(p + 0xb4) == 0) {
            return;
        }
        func_02054144(z);
        delete *(Obj **)(p + 0xb4);
        *(Obj **)(p + 0xb4) = 0;
    } else {
        for (i = 0; i < 3; i++) {
            uint8_t *q = p + i;
            if (q[0x98]) {
                func_ov003_02178bfc(p, i);
                q[0x98] = 0;
            }
        }
    }
}
