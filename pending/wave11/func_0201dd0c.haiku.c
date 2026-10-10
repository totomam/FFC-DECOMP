#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } S;

extern void func_0201dd0c_helper(uint32_t *p, uint32_t x);

void func_0201dd0c(S s)
{
    uint32_t buf[9];
    func_0201dd0c_helper(buf, s.a);
    func_0201dd0c_helper(buf, s.b);
    func_0201dd0c_helper(buf, s.c);
    func_0201dd0c_helper(buf, s.d);
}
