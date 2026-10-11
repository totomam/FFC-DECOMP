#include "ffc/types.h"

extern void func_0202ad8c(void *p);
extern void func_02022bec(uint32_t v, uint32_t w);
extern uint32_t data_020ad934[];

uint32_t *func_0202c548(uint32_t *p)
{
    func_0202ad8c(p);
    p[0] = (uint32_t)data_020ad934;
    func_02022bec(p[12], 0x1555);
    p[103] = 0;
    p[104] = 0;
    p[105] = 0;
    p[106] = 0;
    p[107] = 0;
    p[108] = 0;
    p[109] = 0;
    return p;
}
