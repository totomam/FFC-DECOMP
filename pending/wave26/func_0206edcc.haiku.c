#include "ffc/types.h"

extern int32_t func_0206cb98(uint32_t x);
extern void func_0206d3d4(uint32_t x);
extern uint32_t data_0213e178;

void func_0206edcc(uint32_t *p)
{
    if (func_0206cb98(data_0213e178) != 0) {
        p[3] = (p[3] & ~0xffu) | 2;
        return;
    }
    func_0206d3d4(data_0213e178);
    p[3] = (p[3] & ~0xffu) | 2;
}
