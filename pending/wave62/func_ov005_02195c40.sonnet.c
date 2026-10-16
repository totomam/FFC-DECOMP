/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef void (*Fn)(void*, P, P);
typedef void (*Fn2)(void*, P);
void func_ov005_02195c40(uint8_t *t, P p)
{
    int32_t x = p.x, y = p.y;
    P q;
    *(int32_t*)(t+0x34) += x - *(int32_t*)(t+0x2c);
    *(int32_t*)(t+0x38) += y - *(int32_t*)(t+0x30);
    *(int32_t*)(t+0x30) = y;
    *(int32_t*)(t+0x2c) = x;
    q.x = x; q.y = y;
    { void *o = *(void**)(t+0x24); (*(Fn**)o)[3](o, q, q); }
    if (*(int32_t*)(t+0x44) != 2) {
        P r; void *o;
        r.x = *(int32_t*)(t+0x2c); r.y = *(int32_t*)(t+0x30);
        o = *(void**)(t+0x28);
        (*(Fn2**)o)[3](o, r);
    }
    *(int32_t*)(t+0x40) = 0;
}
