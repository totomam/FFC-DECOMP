#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219dde4(uint8_t *p);
extern void func_ov008_0219de5c(uint8_t *p);
extern void func_ov008_0219da58(uint8_t *p);

int func_ov008_0219ddb0(uint8_t *p) {
    int n = 0x101;
    int v = p[n];
    int u = p[n - 1];
    int s = u + v;
    p[n - 1] = (uint8_t)(func_0209a76c(s, v + 1) >> 32);
    func_ov008_0219dde4(p);
    func_ov008_0219de5c(p);
    func_ov008_0219da58(p);
    return 1;
}
