#include "ffc/types.h"

extern void func_ov006_021b20f0(int x);
extern int func_0208df68(void *p);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2500(void);

int func_ov006_021b24dc(void)
{
    func_ov006_021b20f0(3);
    if (func_0208df68((void *)func_ov006_021b2500) == 2) {
        goto ret1;
    }
    func_ov006_021b2140();
    return 0;
ret1:
    return 1;
}
