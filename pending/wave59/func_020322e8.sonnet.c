#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } Q;
void func_020322e8(Q *d, uint8_t *s)
{
    d->a = *(uint32_t*)(s + 0x9c);
    d->b = *(uint32_t*)(s + 0xa0);
    uint32_t c = *(uint32_t*)(s + 0xa4);
    d->d = *(uint32_t*)(s + 0xa8);
    d->c = c;
}
