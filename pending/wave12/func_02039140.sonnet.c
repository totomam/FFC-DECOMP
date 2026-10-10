/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02092878(uint8_t *p);
struct G { uint32_t v; G(uint32_t x) : v(x) {} ~G() { v = 0; } };
extern "C" void func_02039140(uint8_t *p, uint32_t unused, uint8_t a, uint8_t b)
{
    G g(1);
    p[4] = g.v;
    p[5] = a;
    p[6] = b;
    func_02092878(p + 7);
}
