/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_0214f204(P *p, int n, uint64_t t);
void func_ov006_0219ef8c(int a, P *p, int c, int d, int *q) {
    P l = *p;
    uint64_t t = 0;
    t += func_0209a71c((int64_t)q[0], 0x1ff6210) >> 6;
    t += func_0209a71c((int64_t)q[1], 0x1ff6210) >> 6;
    func_ov000_0214f204(&l, 1, t);
}
