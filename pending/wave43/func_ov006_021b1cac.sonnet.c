#include "ffc/types.h"

typedef struct {
    uint16_t h0;
    uint16_t h2;
    uint16_t h4;
    uint16_t h6;
    uint16_t h8;
    uint16_t ha;
    uint16_t hc;
} S;

extern S *data_ov006_021bc7fc;
extern int func_ov006_021996e8(int a, int b);
extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_ov006_0219c710(int a);
extern void func_ov006_021b1f60(int a);

void func_ov006_021b1cac(void)
{
    uint16_t r7 = 0;
    uint16_t i;

    for (i = 1; i < 16; i++) {
        uint32_t bit = 1u << i;
        if (data_ov006_021bc7fc->ha & bit) {
            if (func_ov006_021996e8(i, 3) == 0) {
                uint16_t m = (uint16_t)~bit;
                func_02088978();
                data_ov006_021bc7fc->h2 &= m;
                data_ov006_021bc7fc->h4 &= m;
                data_ov006_021bc7fc->h6 &= m;
                data_ov006_021bc7fc->h8 &= m;
                data_ov006_021bc7fc->ha &= m;
                data_ov006_021bc7fc->hc &= m;
                func_0208898c();
                func_ov006_0219c710(i);
            } else {
                r7 |= (uint16_t)bit;
            }
        }
    }

    if (r7 == 0) {
        func_ov006_021b1f60(7);
    } else {
        func_ov006_021b1f60(4);
    }
}
