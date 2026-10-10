#include "ffc/types.h"

extern int func_02021240(int x, int y);

typedef struct { uint8_t pad[0x1e8]; int a; int b; } S;

int func_ov003_021498bc(S *p, int y)
{
    p->a = 0;
    p->b = 0;
    return func_02021240(-1, y);
}
