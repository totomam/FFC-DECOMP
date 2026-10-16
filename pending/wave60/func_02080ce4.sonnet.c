/* cflags: -lang c++ -noO4,p -O4 */
#include "ffc/types.h"
struct V2 { int x, y; void z() { x = 0; y = 0; } };
struct V3 { int x, y, z; void id() { x = 0; y = 0; z = 0x1000; } };
struct S { int w0, w1; V2 a; int w4, w5; V2 b; V3 c; V2 d; V3 e;
  void init(int p, int q) { w0 = q; w1 = p; w4 = -p; w5 = q; a.z(); b.z(); c.id(); d.z(); e.id(); } };
extern "C" void func_02080ce4(S *s, int a, int b) {
    s->init(a, b);
}
