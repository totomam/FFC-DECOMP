#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    void *f18;
    uint32_t f1c;
} FFCState;

extern uint16_t func_02088a2c(void *object);
extern uint32_t func_0207e1cc(void *data, int n);
extern FFCState data_021412e0;
extern uint8_t data_020a1a5c;
extern uint8_t data_020b2930;

void func_0207eb4c(void *object) {
    uint32_t z = 0;
    if (func_02088a2c(object) == 2) {
        data_021412e0.f8 = ~z;
        data_021412e0.fc = z;
        data_021412e0.f10 = ~z;
    } else {
        data_021412e0.f8 = z;
        data_021412e0.fc = z;
        data_021412e0.f10 = z;
    }
    data_021412e0.f14 = z;
    FFCState *p = &data_021412e0;
    p->f18 = &data_020a1a5c;
    p->f1c = 0x40;
    p->f4 = func_0207e1cc(&data_020b2930, 3);
}
