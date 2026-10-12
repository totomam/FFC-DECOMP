#include "ffc/types.h"

extern uint8_t *data_ov006_021bc810;
extern uint8_t *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint32_t func_ov006_021b3ed4(uint32_t a, uint8_t *p, uint32_t b);
extern uint32_t func_ov006_021b5048(void);
extern uint32_t func_ov006_021b51e4(uint32_t a, uint32_t b);
extern void func_ov006_021b50c8(uint32_t v, uint8_t *p);
extern void func_ov006_021b50bc(uint32_t v, uint8_t *p);

void func_ov006_021b398c(void)
{
    uint32_t i;
    uint32_t size = 0x450;
    uint32_t stride = size >> 1;

    data_ov006_021bc810 = func_ov006_021b49e4(size, 4);

    for (i = 0; i < 2; i++) {
        uint8_t *p = data_ov006_021bc810 + i * stride;
        *(uint32_t *)(p + 0x224) = func_ov006_021b3ed4(0x20, p, 0x10);
        *(uint32_t *)(p + 0x220) = func_ov006_021b5048();
        *(uint32_t *)(p + 0x208) = func_ov006_021b51e4(i, 0x40);
        *(uint32_t *)(p + 0x218) = func_ov006_021b51e4(i, 0x7f) + 8;
        func_ov006_021b50c8(*(uint32_t *)(data_ov006_021bc810 + i * stride + 0x220),
                            data_ov006_021bc810 + i * stride + 0x200);
        func_ov006_021b50bc(*(uint32_t *)(data_ov006_021bc810 + i * stride + 0x220),
                            data_ov006_021bc810 + i * stride + 0x210);
    }
}
