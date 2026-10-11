/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint8_t *p; uint32_t cnt; } S020543B8;
extern "C" {
extern S020543B8 data_0213e060;
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
void func_020543b8(void);
}
extern "C" void func_020543b8(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    int r0 = 0;
    uint16_t old = *ime;
    *ime = 0;
    if (old != 0) r0 = 1;
    int n = data_0213e060.cnt;
    data_0213e060.cnt = diff(n, 1);
    if (data_0213e060.cnt == 0) data_0213e060.p[9] = 0;
    old = *ime;
    *ime = r0;
}
