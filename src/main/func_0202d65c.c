#include "ffc/types.h"

extern void func_0202b24c(uint32_t v, void *p);

typedef struct {
    uint8_t pad0[0x80];
    uint32_t f80;
    uint8_t pad1[0x1c];
    uint32_t fa0;
    uint32_t fa4;
    uint32_t fa8;
} T;

void func_0202d65c(T *p, const uint32_t *s)
{
    p->fa0 = s[0];
    p->fa4 = s[1];
    p->fa8 = s[2];
    if (p->f80 != 0) {
        func_0202b24c(p->f80, &p->fa0);
    }
}
