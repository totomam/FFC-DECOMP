#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *p, uint32_t v, uint32_t n);
extern int func_0208942c(void *p);
extern uint32_t data_ov006_021ba1dc[];

uint32_t func_ov006_0219f0a4(void)
{
    uint32_t t[3];
    uint32_t r4;
    uint32_t s;

    if (data_ov006_021ba1dc[2] == 0) {
        r4 = 0;
        func_ov006_0219ef6c(t, r4, 12);
        if (func_0208942c(t) == 0) {
            r4 = t[0] << 10;
            r4 = r4 + (t[1] << 3);
            r4 = r4 + t[2];
        }
        data_ov006_021ba1dc[6] = r4;
        data_ov006_021ba1dc[7] = 0x5d588b65;
        data_ov006_021ba1dc[8] = 0x269ec3;
        data_ov006_021ba1dc[2] = 1;
    }
    s = data_ov006_021ba1dc[7] * data_ov006_021ba1dc[6] + data_ov006_021ba1dc[8];
    data_ov006_021ba1dc[6] = s;
    return ((((s >> 16) * 0x7fff) >> 16) & 0xffff);
}
