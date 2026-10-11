#include "ffc/types.h"

extern void func_02043b38(uint8_t *a, int32_t e, int32_t c, int32_t d);
extern int32_t func_ov003_0216ca20(uint8_t *a, int32_t e, uint8_t *p1, uint8_t *p2, uint8_t *p3);
extern void func_02043ae0(uint8_t *a, int32_t r, int32_t e);

void func_02043bf8(uint8_t *a, int32_t unused, int32_t c, int32_t d, int32_t e)
{
    int32_t r;
    func_02043b38(a, e, c, d);
    r = func_ov003_0216ca20(a, e, a + 0x130, a + 0x138, a + 0x118);
    func_02043ae0(a, r, e);
}
