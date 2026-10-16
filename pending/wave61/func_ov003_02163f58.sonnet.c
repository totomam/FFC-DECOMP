#include "ffc/types.h"
extern uint32_t data_0209e054, data_0209e058, data_0209e050;
extern uint32_t data_ov003_0217a564[];
extern uint32_t data_ov003_0217a594;
extern void func_ov003_02163bf4(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
void *func_ov003_02163f58(void *p) {
    uint32_t a = data_0209e054;
    uint32_t c = data_0209e058;
    uint32_t e = data_0209e050;
    uint32_t g = data_ov003_0217a564[2];
    func_ov003_02163bf4(p, g, 8, c, a, e);
    *(uint32_t *)p = (uint32_t)&data_ov003_0217a594;
    return p;
}
