#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021b46e8(int a, int b);
extern void func_ov006_021a6508(int a, uint32_t *out);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ae79c(void);

void func_ov006_021ae754(void)
{
    uint32_t v;

    func_ov006_021b3fd0(2, 0, 0x15, 8);
    func_ov006_021b46e8(0, 0x15);
    func_ov006_021a6508(0, &v);
    if (v == 0) {
        func_ov006_021b3fd0(2, 1, 1, 8);
        func_ov006_021b46e8(1, 1);
    }
    func_ov006_021a64c8(func_ov006_021ae79c);
}
