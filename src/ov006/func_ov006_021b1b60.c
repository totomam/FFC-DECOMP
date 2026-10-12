#include "ffc/types.h"

extern uint32_t func_ov006_021996e8(uint32_t a, uint32_t b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t a);
extern void func_ov006_0219c710(uint32_t a);

typedef struct {
    uint16_t f0;
    uint16_t f2;
    uint16_t f4;
    uint16_t f6;
    uint16_t f8;
    uint16_t fa;
    uint16_t fc;
} RegBlock;

extern RegBlock *data_ov006_021bc7fc;

void func_ov006_021b1b60(uint32_t a) {
    uint16_t mask;
    uint32_t s;

    if (func_ov006_021996e8(a, 2) == 0) {
        mask = (uint16_t)~(1u << a);
        s = func_02088978();
        data_ov006_021bc7fc->f2 &= mask;
        data_ov006_021bc7fc->f4 &= mask;
        data_ov006_021bc7fc->f6 &= mask;
        data_ov006_021bc7fc->f8 &= mask;
        data_ov006_021bc7fc->fa &= mask;
        data_ov006_021bc7fc->fc &= mask;
        func_0208898c(s);
        func_ov006_0219c710(a);
        return;
    }
    s = func_02088978();
    data_ov006_021bc7fc->f6 &= (uint16_t)~(1u << a);
    data_ov006_021bc7fc->f8 |= (uint16_t)(1u << a);
    func_0208898c(s);
}
