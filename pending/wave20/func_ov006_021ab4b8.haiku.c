#include "ffc/types.h"

extern void func_ov006_021afd28(void);
extern void func_ov006_021a6508(uint32_t arg0, int32_t *arg1);
extern uint8_t data_ov006_021bc78c[];

void func_ov006_021ab4b8(void)
{
    int32_t status;

    func_ov006_021afd28();
    func_ov006_021a6508(0, &status);
    if (status == 0) {
        *(uint16_t *)(data_ov006_021bc78c + 4) = 0;
        data_ov006_021bc78c[0] = 0;
        data_ov006_021bc78c[2] = 0;
    }
}
