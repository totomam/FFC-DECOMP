#include "ffc/types.h"

extern void func_ov006_021aca20(void);
extern void func_ov006_021aca24(void);
extern int func_ov006_021b1430(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aca28(void);

void func_ov006_021aca00(void)
{
    func_ov006_021aca20();
    func_ov006_021aca24();
    if (func_ov006_021b1430() == 0) {
        func_ov006_021a64c8(func_ov006_021aca28);
    }
}
