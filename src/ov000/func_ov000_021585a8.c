/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02084ca4(void *a, void *b, uint32_t n);
extern uint8_t data_ov000_0217000c[];
extern uint8_t data_ov000_02170011[];
extern uint8_t data_ov000_02170016[];
extern uint8_t data_ov000_02170018[];
}
typedef struct { uint64_t a, b; uint16_t h16,h18; } S;
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_ov000_021585a8(S *p)
{
    Num n(6);
    func_02084ca4(data_ov000_0217000c, p, 6);
    p->a &= ((uint64_t)0x7ff << 32) | (uint32_t)diff(n, 7);
    func_02084ca4(data_ov000_02170011, &p->b, 6);
    { uint64_t *q = &p->b; *q = (*q >> 3) & (((uint64_t)0x7ff << 32) | (uint32_t)diff(n, 7)); }
    func_02084ca4(data_ov000_02170016, &p->h16, 2);
    p->h16 = (uint16_t)((int)p->h16 >> 6);
    p->h16 &= 0x7ff >> 1;
    func_02084ca4(data_ov000_02170018, &p->h18, 2);
}
