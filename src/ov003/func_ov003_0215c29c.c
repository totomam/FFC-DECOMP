#include "ffc/types.h"

extern void *func_ov003_02155b40(void *p);
extern uint32_t data_ov003_02178e38[];

void func_ov003_0215c29c(uint8_t *p0, void *p1)
{
    uint8_t flag = 0;
    uint32_t i = 0;
    do {
        uint8_t *s = (uint8_t *)func_ov003_02155b40(p1);
        uint32_t *dp = &data_ov003_02178e38[i];
        if (*dp == *(uint16_t *)(s + 0x12)) {
            flag = 1;
            break;
        }
        i++;
    } while (i < 1);
    p0[0xa8] = flag;
}
