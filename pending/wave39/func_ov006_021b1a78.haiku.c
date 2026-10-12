#include "ffc/types.h"

extern int func_ov006_021996e8(int a, int b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t a);
extern void func_ov006_0219c710(int a);
extern uint16_t *data_ov006_021bc7fc;

void func_ov006_021b1a78(int param)
{
    if (func_ov006_021996e8(param, 1) == 0) {
        uint16_t mask = (uint16_t)~(1 << param);
        uint32_t saved = func_02088978();
        data_ov006_021bc7fc[1] &= mask;
        data_ov006_021bc7fc[2] &= mask;
        data_ov006_021bc7fc[3] &= mask;
        data_ov006_021bc7fc[4] &= mask;
        data_ov006_021bc7fc[5] &= mask;
        data_ov006_021bc7fc[6] &= mask;
        func_0208898c(saved);
        func_ov006_0219c710(param);
    }
}
