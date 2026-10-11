#include "ffc/types.h"

extern int32_t func_0207fc00(int32_t a, int32_t b, int32_t c, int32_t d);
extern int32_t func_0207d8ec(int32_t a, int32_t b, int32_t c, int32_t d, void *e, int32_t f, int32_t g);
extern void func_ov006_021b3878(void);

int32_t func_ov006_021b3844(int32_t a0, int32_t a1, int32_t a2, int32_t a3)
{
    int32_t r = func_0207fc00(a0, a1, a2, a3);
    func_0207d8ec(-1, a2 + r, a1, a3, (void *)func_ov006_021b3878, a0, 1);
    return 256;
}
