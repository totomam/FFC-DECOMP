/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void *func_ov003_021464f4(void *p, uint16_t v);
extern "C" uint8_t *func_ov003_02155b40(void *p);

struct V { uint32_t x, y; };

extern "C" V func_ov003_0214e0d4(uint8_t *s)
{
    uint8_t *q = func_ov003_02155b40(func_ov003_021464f4(*(void **)(s + 0x14), *(uint16_t *)(s + 0x18)));
    V *p = (V *)(q + 8);
    uint32_t sy = *(uint32_t *)(s + 0x2c);
    uint32_t y = p->y + sy;
    uint32_t x = p->x + *(uint32_t *)(s + 0x28);
    return (V){x, y};
}
