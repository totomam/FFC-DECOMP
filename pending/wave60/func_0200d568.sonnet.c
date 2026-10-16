/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_0200d5d4(void *object, uint32_t value);
struct Flag { uint8_t f; };
static inline uint32_t pass(Flag fl) { return *(uint32_t*)&fl; }
extern "C" void func_0200d568(uint32_t *p, uint32_t add)
{
    uint32_t v = p[1] + add;
    uint32_t *q = p + 1;
    p[1] = v;
    if (p[3] < p[4]) {
        p[3]++;
        ((uint32_t *)p[2])[p[3]-1] = v;
        return;
    }
    uint8_t z = 0;
    func_0200d5d4(p + 2, (uint32_t)q);
}
