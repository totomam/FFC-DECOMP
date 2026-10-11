#include "ffc/types.h"

extern void func_0202b240(uint32_t v, void *p);

typedef struct {
    uint8_t pad0[0x80];
    uint32_t f80;
    uint8_t pad1[0x10];
    uint32_t f94;
    uint32_t f98;
    uint32_t f9c;
} T;

void func_0202d6bc(T *p, const uint32_t *s)
{
    p->f94 = s[0];
    p->f98 = s[1];
    p->f9c = s[2];
    if (p->f80 != 0) {
        func_0202b240(p->f80, &p->f94);
    }
}
