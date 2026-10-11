#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t a);
extern void func_ov006_021b11fc(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021aca00(void);

void func_ov006_021ac9cc(void)
{
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    func_ov006_021b11fc(0x44, 5, 1, -1, 0);
    func_ov006_021a64c8((void *)func_ov006_021aca00);
}
