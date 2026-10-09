#include "ffc/types.h"
typedef struct { int32_t fn; int32_t adj; } P;
typedef struct { uint8_t pad[0x80]; P p; } S;
void func_ov004_0214a7f0(S *self)
{
    P *p = &self->p;
    int32_t adj = p->adj;
    int32_t off = adj >> 1;
    uint8_t *th = (uint8_t *)self + off;
    void (*f)(void *);
    if (adj & 1) {
        f = *(void (**)(void *))(*(uint8_t **)th + p->fn);
    } else {
        f = (void (*)(void *))p->fn;
    }
    f(th);
}
