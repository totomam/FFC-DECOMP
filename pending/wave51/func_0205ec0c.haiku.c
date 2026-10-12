#include "ffc/types.h"

extern uint8_t data_020b1060[];
typedef struct { uint32_t a, b, c, d; } V4;
extern void func_0205ecc8(void *p, V4 v);
extern void func_02059538(void *a, void *b);
extern void *func_02053d78(void *object);
extern void func_0200d5ec(void *o);
extern void func_02056844(void *o);

void *func_0205ec0c(void *p)
{
    uint8_t *q = (uint8_t *)p;
    uint8_t *r4;
    uint32_t x = 2u << 30;
    *(uint8_t **)q = data_020b1060;
    {
        V4 v;
        v.a = x;
        v.b = x;
        v.c = x - 1;
        v.d = x - 1;
        func_0205ecc8(p, v);
    }
    func_02059538(*(void **)((uint8_t *)*(void **)(q + 0x14) + 0x14), *(void **)(q + 0x18));
    r4 = q + 0x68;
    func_02053d78(r4 + 0xc);
    func_02053d78(r4);
    r4 = q + 0x50;
    func_02053d78(r4 + 0xc);
    func_02053d78(r4);
    func_0200d5ec(q + 0x44);
    func_02056844(p);
    return p;
}
