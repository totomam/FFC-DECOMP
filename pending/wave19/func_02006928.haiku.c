#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Entry;

void func_02006928(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    Entry *e;
    uint32_t n = *(uint32_t *)(p + 0x28b4);
    e = (Entry *)(p + 0x28b8) + n;
    e->a = a;
    e->b = b;
    e->c = c;
    e->d = d;
    *(uint32_t *)(p + 0x28b4) = *(uint32_t *)(p + 0x28b4) + 1;
}
