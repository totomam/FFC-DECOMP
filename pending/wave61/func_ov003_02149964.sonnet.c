/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern uint32_t func_ov003_0214649c(void *s);
extern uint32_t func_ov003_02153cb4(uint32_t x, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t n);
extern uint8_t *func_ov003_02148b50(void *s, P p);
extern void *func_ov003_0214f18c(void *o, void *s, uint32_t x, P p, uint8_t *y, uint32_t z, uint32_t w);
extern void func_02056bc0(void *object, void *node);
void *func_ov003_02149964(uint8_t *self, P p)
{
    uint32_t r;
    uint8_t *q;
    void *o;
    r = func_ov003_02153cb4(func_ov003_0214649c(self), p.a, p.b);
    o = func_0205681c(0xd0);
    if (o != 0) {
        q = func_ov003_02148b50(self, p);
        if (q != 0) q = (uint8_t*)q + 0;
        o = func_ov003_0214f18c(o, self, *(uint32_t*)(self + 0xd0 + 0xa8), p, q, 1, r);
    }
    func_02056bc0(*(void**)(self + 0x18c), o);
    return o;
}
