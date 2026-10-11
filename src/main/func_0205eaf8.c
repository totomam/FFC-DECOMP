#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} T;

typedef struct {
    uint8_t pad[0x14];
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint8_t d;
} P;

extern void func_0205a028(int x, T t, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0205eaf8(P *p, int x, T t)
{
    T l;
    l = t;
    func_0205a028(x, l, p->a, p->b, p->c, p->d);
}
