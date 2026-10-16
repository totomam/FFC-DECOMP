#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern void func_020816d4(uint32_t, uint32_t);
void func_ov003_02149570(uint32_t a, ...)
{
    S s;
    S *q = (S*)(&a + 1);
    s.x = q->x;
    func_020816d4(q->y, q->x);
}
