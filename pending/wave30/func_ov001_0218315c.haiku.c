#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
} G;

extern G data_ov001_021952f0;
extern uint32_t func_ov001_02183130(uint32_t a, uint32_t b);
extern uint32_t data_ov001_02191d8c;
extern uint32_t data_ov001_02191da8;
extern uint32_t data_ov001_02191dc4;

uint32_t func_ov001_0218315c(void)
{
    if (data_ov001_021952f0.f2c == 0) {
        data_ov001_021952f0.f2c = func_ov001_02183130(data_ov001_021952f0.f1c, (uint32_t)&data_ov001_02191d8c);
    }
    if (data_ov001_021952f0.f28 == 0) {
        data_ov001_021952f0.f28 = func_ov001_02183130(data_ov001_021952f0.f18, (uint32_t)&data_ov001_02191da8);
    }
    if (data_ov001_021952f0.f24 == 0) {
        data_ov001_021952f0.f24 = func_ov001_02183130(data_ov001_021952f0.f04, (uint32_t)&data_ov001_02191dc4);
    }
    if (data_ov001_021952f0.f2c == 0) {
        goto zero;
    }
    if (data_ov001_021952f0.f28 == 0) {
        goto zero;
    }
    if (data_ov001_021952f0.f24 != 0) {
        return 1;
    }
zero:
    return 0;
}
