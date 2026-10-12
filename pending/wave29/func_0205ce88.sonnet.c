/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t orr(const Num &a, uint32_t b) { return a.v | b; }
extern "C" {
extern void func_0205cb98(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t prod, uint32_t idx, uint32_t x);
extern uint32_t data_020b0f40;
extern uint32_t data_020b0f4c[];
extern uint32_t data_020b0f50[];
uint32_t *func_0205ce88(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t idx, uint32_t x);
uint32_t *func_0205ce88(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t idx, uint32_t x) {
    uint32_t n = idx;
    uint32_t prod = data_020b0f50[n * 2] * (data_020b0f4c[n * 2] << 1);
    func_0205cb98(p, a1, a2, a3, prod, n, x);
    p[0] = (uint32_t)&data_020b0f40;
    p[4] = orr(orr(p[4], 4), 0x80);
    p[14] = idx;
    p[15] = data_020b0f4c[idx * 2];
    p[16] = data_020b0f50[idx * 2];
    return p;
}
}
