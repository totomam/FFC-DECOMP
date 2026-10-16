#include "ffc/types.h"
extern uint8_t *data_ov006_021bc814[];
extern int func_ov006_021b3aa0(int a, int b, int c);
extern int func_ov006_021b3bf8(int a, int b);
extern void func_ov006_021b3e20(int a, int b, int c);
int func_ov006_021b3e88(int a, int b, int c)
{
    int r = func_ov006_021b3aa0(a, *(uint16_t*)(data_ov006_021bc814[a] + b * 8), c);
    int t = func_ov006_021b3bf8(r, 0);
    func_ov006_021b3e20(a, b, t);
    return r;
}
