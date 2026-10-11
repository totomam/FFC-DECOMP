/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void *func_ov003_021464f4(void *p, uint16_t v);
extern "C" uint8_t *func_ov003_02155b40(void *p);

struct V { uint32_t x, y; };
inline V add(const V &a, const V &b) { V r; r.x = a.x + b.x; r.y = a.y + b.y; return r; }

extern "C" V func_ov003_0214e0d4(uint8_t *s)
{
    uint8_t *q = func_ov003_02155b40(func_ov003_021464f4(*(void **)(s + 0x14), *(uint16_t *)(s + 0x18)));
    return add(*(V *)(q + 8), *(V *)(s + 0x28));
}
