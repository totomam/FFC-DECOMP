#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint32_t data_ov006_021bb170[];
extern uint32_t data_ov006_021bb1f4[];

void func_ov006_021a0438(void)
{
    uint32_t i;

    func_02088978();
    data_ov006_021bb170[0x68 / 4] = 0;
    data_ov006_021bb170[0x6c / 4] = 0;
    for (i = 0; i < 4; i++) {
        data_ov006_021bb1f4[i] = i;
    }
    func_0208898c();
}
