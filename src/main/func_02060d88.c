#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} Quad;

extern void func_02057578(void *p);
extern void func_02060b0c(uint32_t x, Quad q);

void func_02060d88(void *p0)
{
    uint32_t *p = (uint32_t *)p0;
    Quad q;

    func_02057578(p0);
    q.a = p[0x34 / 4];
    q.b = p[0x38 / 4];
    q.c = p[0x3c / 4];
    q.d = p[0x40 / 4];
    func_02060b0c(p[0x74 / 4], q);
}
