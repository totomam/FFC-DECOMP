#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t a, uint32_t b);
extern void func_ov006_021b3b9c(uint32_t a);
extern void func_ov006_021b42d8(uint32_t a);
extern void func_ov006_021b51a8(uint32_t a);
extern void func_ov006_021b49fc(void *p);
extern uint8_t *data_ov006_021bc700;

void func_ov006_021a5f24(uint32_t a)
{
    int i;
    uint32_t off;

    func_ov006_021b5774(0, a);
    off = 0;
    for (i = 0; i < 4; i++) {
        func_ov006_021b3b9c(*(uint32_t *)(data_ov006_021bc700 + off + 0x48));
        func_ov006_021b42d8(*(uint32_t *)(data_ov006_021bc700 + off));
        off += 4;
    }
    {
        uint8_t **pp = &data_ov006_021bc700;
        for (i = 0; i < 2; i++) {
            func_ov006_021b3b9c(*(uint32_t *)((*pp) + i * 4 + 0x40));
        }
    }
    {
        uint8_t **pp = &data_ov006_021bc700;
        for (i = 0; i < 2; i++) {
            func_ov006_021b51a8(*(uint32_t *)((*pp) + i * 4 + 0x38));
        }
    }
    {
        uint8_t **pp = &data_ov006_021bc700;
        for (i = 0; i < 10; i++) {
            func_ov006_021b51a8(*(uint32_t *)((*pp) + i * 4 + 0x10));
        }
    }
    func_ov006_021b49fc(&data_ov006_021bc700);
}
