#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern S data_ov003_0217987c;
extern void func_ov003_02149b44(void *o, uint32_t z, uint32_t a1, uint32_t a2, uint32_t *p, uint32_t *q, S s);
extern void *func_ov003_0214a518(void *o, S d, uint32_t z, uint32_t p, uint32_t q, uint32_t a1, uint32_t a2, S s, uint32_t x, uint32_t y, uint32_t one);
extern void func_02056bc0(void *object, void *node);
void func_ov003_0214a4a0(uint8_t *o, uint32_t a1, uint32_t a2, S s, uint32_t x, uint32_t y, uint32_t z)
{
    S l; uint32_t *p = &l.a;
    void *r;
    p[0] = 0; p[1] = 0;
    func_ov003_02149b44(o, z, a1, a2, p, &l.b, s);
    r = func_ov003_0214a518(o, data_ov003_0217987c, z, l.a, l.b, a1, a2, s, x, y, 1);
    func_02056bc0(*(void **)(o + 0x1b4), r);
}
