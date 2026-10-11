/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b; };
struct V { int v; V(int x) : v(x) {} ~V() {} };
struct T { uint8_t pad[0x12]; uint8_t f:8;
  void set(const V &v) { f = v.v; } };
extern "C" void *func_ov007_0219b904(void *obj, S s);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" S data_ov007_021c2c0c;

extern "C" void func_ov007_0219b8d4(uint8_t *a)
{
    T *p = (T *)(a + 0x14);
    p->set(V(1));
    func_02056bc0(a + 0x14, func_ov007_0219b904(a, data_ov007_021c2c0c));
}
