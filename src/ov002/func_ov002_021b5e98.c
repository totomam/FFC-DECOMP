#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Pos;
typedef void (*VMethod)(void *, Pos);

void func_ov002_021b5e98(uint8_t *a, Pos p)
{
    Pos q1, q2, q3;
    void *o;

    o = *(void **)(a + 0x80);
    ((VMethod *)(*(void **)o))[3](o, p);

    q1.x = p.x - 0x5b;
    q1.y = p.y - 6;
    o = *(void **)(a + 0x8c);
    ((VMethod *)(*(void **)o))[3](o, q1);

    q2.x = p.x + 0x31;
    q2.y = p.y - 8;
    o = *(void **)(a + 0x88);
    ((VMethod *)(*(void **)o))[3](o, q2);

    o = *(void **)(a + 0x84);
    if (o != 0) {
        q3.x = p.x + 0x28;
        q3.y = p.y;
        ((VMethod *)(*(void **)o))[3](o, q3);
    }
}
