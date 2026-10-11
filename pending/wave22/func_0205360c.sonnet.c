#include "ffc/types.h"
typedef struct { uint8_t v; } Flag;
typedef struct { uint32_t a[4]; } Elem;
typedef struct { Elem *begin; uint32_t count; } Span;
extern void func_02053d94(void *out, Elem *begin, Elem *end, Flag v);
void *func_0205360c(uint32_t *out, Span *src)
{
    Flag f;
    out[0] = 0; out[1] = 0; out[2] = 0;
    func_02053d94(out, src->begin, src->begin + src->count, f);
    uint32_t *q = out + 3;
    q[0] = 0; q[1] = 0; q[2] = 0;
    return out;
}
