/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { uint32_t a, b; };
struct N { uint8_t pad[0x12]; uint8_t v;
  void sv(uint32_t m, uint32_t x) { v = (v & ~m) | x; } };
extern "C" {
extern P data_ov007_021c2c0c;
extern void *func_ov007_0219b904(void *o, P p);
extern void func_02056bc0(void *object, void *node);
void func_ov007_0219b8d4(uint8_t *o);
}
struct Flag { N *n; Flag(N *x) : n(x) {} ~Flag() {} };
static inline void set(const Flag &f) { f.n->sv(0xff, 1); }
void func_ov007_0219b8d4(uint8_t *o) {
    set(Flag((N*)(o + 0x14)));
    void *r = func_ov007_0219b904(o, data_ov007_021c2c0c);
    func_02056bc0(o + 0x14, r);
}
