/* cflags: -lang c++ */
#include "ffc/types.h"
struct F { uint8_t v; };
extern "C" void func_0200b5f4(void *a, uint32_t b, F c);
extern "C" void func_02056844(uint32_t a);
extern "C" void func_0200b704(void *a, uint32_t b, F c);
extern "C" void func_0200b524(uint32_t *p, uint32_t a, uint32_t b)
{
    F f; f.v = 0;
    func_0200b5f4(p, p[1], f);
    if (p[0] != 0) {
        func_02056844(p[0]);
        p[0] = 0;
        p[2] = 0;
    }
    F g; g.v = 0;
    func_0200b704(p, b, g);
}
