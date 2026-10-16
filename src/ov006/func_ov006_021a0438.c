#include "ffc/types.h"
extern int func_02088978(void);
extern void func_0208898c(int);
extern uint32_t data_ov006_021bb170[];
extern uint32_t data_ov006_021bb1f4[];
void func_ov006_021a0438(void)
{
    int i;
    uint32_t *p;
    int r = func_02088978();
    data_ov006_021bb170[0x68/4] = 0;
    data_ov006_021bb170[0x6c/4] = 0;
    p = data_ov006_021bb1f4;
    for (i = 0; i < 4; i++) {
        *p++ = 0;
    }
    func_0208898c(r);
}
