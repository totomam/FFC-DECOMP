#include "ffc/types.h"

extern char data_ov003_0217ae54[];
extern void func_ov003_02168848(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

void *func_ov003_02168b34(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    func_ov003_02168848(p, a, b, c, 0, 0x1b, 0);
    *(char **)p = data_ov003_0217ae54;
    return p;
}
