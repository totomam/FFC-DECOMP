#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern int func_0205f52c(int x, S s);

int func_0205f518(int x, uint32_t a, uint32_t b)
{
    S t;
    t.a = a;
    t.b = b;
    return func_0205f52c(x, t);
}
