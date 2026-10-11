#include "ffc/types.h"

extern uint32_t data_ov001_02195750[];
extern void func_ov001_02185d68(void);
extern void func_ov001_02185d5c(void);
extern void func_ov001_02185d74(void);
extern uint32_t func_ov000_02168a10(uint32_t a, uint32_t b, uint32_t c, void *d, void *e, void *f);

void func_ov001_02185d80(void)
{
    if (data_ov001_02195750[1] == 0) {
        data_ov001_02195750[1] = func_ov000_02168a10(8, 100, 2, func_ov001_02185d5c, func_ov001_02185d68, func_ov001_02185d74);
    }
}
