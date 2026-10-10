#include "ffc/types.h"

extern void func_ov003_02163bf4(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t data_0209e054;
extern uint32_t data_0209e058;
extern uint32_t data_0209e050;
extern uint32_t data_ov003_0217a564[];
extern uint8_t data_ov003_0217a594[];

void *func_ov003_02163f58(void *a)
{
    func_ov003_02163bf4(a, data_ov003_0217a564[2], 8, data_0209e058, data_0209e054, data_0209e050);
    *(uint8_t **)a = data_ov003_0217a594;
    return a;
}
