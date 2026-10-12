#include "ffc/types.h"

typedef struct Ctx {
    uint8_t raw[0x10];
    uint32_t w10;
    uint16_t h14;
    uint8_t b16;
    uint8_t b17;
} Ctx;

extern Ctx *data_ov006_021bc6a8;
extern uint8_t data_ov006_021b8058[];
extern uint8_t data_ov006_021b8068[][2];

extern uint32_t func_ov006_021b3bf8(uint32_t obj, uint32_t zero);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(uint32_t obj, int32_t m, int32_t one);
extern void func_ov006_021a37b8(uint32_t size);
extern void func_ov006_021b5774(uint32_t a, uint32_t b);

void func_ov006_021a3a04(uint32_t a)
{
    int i;
    int count;
    uint8_t v;

    data_ov006_021bc6a8->h14++;
    if (data_ov006_021bc6a8->h14 >= 0x10) {
        count = data_ov006_021b8058[data_ov006_021bc6a8->b17];
        for (i = 0; i < count; i++) {
            uint32_t x = ((uint32_t *)data_ov006_021bc6a8)[i];
            v = data_ov006_021b8068[data_ov006_021bc6a8->b17][i];
            func_ov006_021b3e20(0, v, func_ov006_021b3bf8(x, 0));
            func_ov006_021b3d84(((uint32_t *)data_ov006_021bc6a8)[i], -1, 1);
        }
        func_ov006_021a37b8(0xa8);
        {
            uint32_t zero = 0;
            data_ov006_021bc6a8->h14 = zero;
            data_ov006_021bc6a8->b16 = zero - 1;
        }
        if (data_ov006_021bc6a8->w10 != 0) {
            data_ov006_021bc6a8->w10 = 0;
            func_ov006_021b5774(0, a);
        }
    }
}
