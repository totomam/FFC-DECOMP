#include "ffc/types.h"

extern void func_ov006_021b1f60(uint32_t x);
extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_ov006_0219c710(uint32_t x);
extern void func_ov006_021b1b60(uint32_t x);

typedef struct {
    uint16_t w0;
    uint16_t w1;
    uint16_t w2;
    uint16_t w3;
    uint16_t w4;
    uint16_t w5;
    uint16_t w6;
} Obj;

extern Obj *data_ov006_021bc7fc;

void func_ov006_021b1be8(void) {
    uint16_t i;

    func_ov006_021b1f60(3);
    for (i = 1; i < 16; i++) {
        uint32_t bit = 1u << i;
        uint16_t mask;

        if (!(data_ov006_021bc7fc->w1 & bit)) {
            continue;
        }
        if (data_ov006_021bc7fc->w2 & bit) {
            continue;
        }
        if (data_ov006_021bc7fc->w3 & bit) {
            goto call_b;
        }
        mask = (uint16_t)~bit;
        func_02088978();
        data_ov006_021bc7fc->w1 &= mask;
        data_ov006_021bc7fc->w2 &= mask;
        data_ov006_021bc7fc->w3 &= mask;
        data_ov006_021bc7fc->w4 &= mask;
        data_ov006_021bc7fc->w5 &= mask;
        data_ov006_021bc7fc->w6 &= mask;
        func_0208898c();
        func_ov006_0219c710(i);
        continue;
call_b:
        func_ov006_021b1b60(i);
    }
}
