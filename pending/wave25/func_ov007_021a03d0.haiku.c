/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
struct Inner { uint8_t pad[0x12]; uint8_t on; uint8_t pad2[1]; uint32_t v; uint8_t pad3[4]; uint32_t lk; };
struct Guard {
    void *m; uint8_t on;
    Guard(void *x, uint8_t o) : m(x), on(o) { if (on) func_0208763c(m); }
    ~Guard() { if (on) func_02087678(m); }
};
struct Mid { uint8_t pad[0x14]; Inner in; };
extern "C" void func_ov007_021a03d0(uint8_t *p)
{
    Mid *a = (Mid *)(p + 0xc);
    Inner *q = &a->in;
    Guard g(&q->lk, q->on);
    int f = q->v == 0; if (f) {}
}
