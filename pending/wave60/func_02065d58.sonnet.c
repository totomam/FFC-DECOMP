#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
typedef void (*Fn)(void*, uint32_t, P, uint32_t);
void func_02065d58(uint32_t *self, uint32_t p1, P p, uint32_t c) {
    P s = *(P*)(self + 8);
    P q;
    void *o;
    q.x = p.x + s.x;
    q.y = p.y + s.y;
    o = (void*)self[7];
    (*(Fn**)o)[14](o, p1, q, c);
}
