#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x38];
    uint8_t *base;
    uint32_t f3c;
    int32_t f40;
    uint32_t f44;
} S;

int func_0204434c(S *s)
{
    uint32_t *p = (uint32_t *)((uint8_t *)s + 0x3c);
    int32_t t = (int32_t)p[1];
    uint8_t *base = s->base;
    int (*fn)(void *, uint32_t);
    if (t & 1) {
        uint8_t *obj = *(uint8_t **)(base + (t >> 1));
        fn = *(int (**)(void *, uint32_t))(obj + p[0]);
    } else {
        fn = (int (*)(void *, uint32_t))p[0];
    }
    return fn(base + (t >> 1), s->f44);
}
