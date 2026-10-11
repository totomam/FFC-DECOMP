#include "ffc/types.h"

extern void *data_ov006_021bc6f4;
extern void func_020878ac(void *p, uint32_t size);
extern void func_02082738(void *p, int c, uint32_t n);
extern void func_ov006_021b5774(int a, int b);

void func_ov006_021a3ee0(int x)
{
    func_020878ac(data_ov006_021bc6f4, 0xc0);
    func_02082738(data_ov006_021bc6f4, 0, 0xc0);
    func_ov006_021b5774(1, x);
}
