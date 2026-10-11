#include "ffc/types.h"

extern void func_ov006_021a6508(int a, uint32_t *b);
extern void func_ov006_021b09a8(void);
extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021ae9d8(void);

void func_ov006_021ae9a0(void)
{
    uint32_t x;
    func_ov006_021a6508(0, &x);
    if (x != 0) {
        func_ov006_021b09a8();
    }
    func_ov006_021b3fd0(3, 1, 1, 8);
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021ae9d8);
}
