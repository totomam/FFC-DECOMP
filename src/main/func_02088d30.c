#include "ffc/types.h"

extern void func_02084b2c(void *, uint32_t, uint32_t);

typedef struct {
    void *f0;
    uint32_t f4;
    void *f8;
} G;

extern G data_021418a4;

void func_02088d30(void *a, uint32_t b) {
    data_021418a4.f8 = a;
    func_02084b2c(a, 0, 0x300);
    data_021418a4.f4 = 3;
    *(uint16_t *)((uint8_t *)data_021418a4.f8 + 0xc) = (uint16_t)(0x2EC - b);
    *(uint16_t *)((uint8_t *)data_021418a4.f8 + 0xe) = 0;
    data_021418a4.f0 = (uint8_t *)data_021418a4.f8 + 0x14;
    *((uint8_t *)data_021418a4.f8 + 0x14) = 0;
    *((uint8_t *)data_021418a4.f0 + 1) = 0;
}
