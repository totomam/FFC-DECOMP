#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_02084ca4(uint32_t dst, uint8_t *src, uint32_t n);
extern int func_ov006_021b26a8(void);
extern int func_ov006_021b2b08(uint8_t *p);
extern int func_ov006_021b2698(void);
extern uint32_t func_ov006_021b2ae8(uint32_t i);

void func_ov006_021b34d4(uint16_t a, uint16_t b, uint32_t c)
{
    if (data_ov006_021bc808[0xa93] == 1) {
        *(uint16_t *)(*(uint8_t **)(data_ov006_021bc808 + 0xab0)) = a;
        ((uint16_t *)(*(uint8_t **)(data_ov006_021bc808 + 0xab0)))[1] = b;
        func_02084ca4(c, *(uint8_t **)(data_ov006_021bc808 + 0xab0) + 4, 0x40);
    } else {
        *(uint32_t *)(data_ov006_021bc808 + 0x204) += 1;
        *(uint16_t *)(*(uint8_t **)(data_ov006_021bc808 + 0xab0)) = 0xbc;
        (*(uint8_t **)(data_ov006_021bc808 + 0xab0))[4] = data_ov006_021bc808[0xa92];
    }

    if (func_ov006_021b26a8() == 5) {
        if (func_ov006_021b2b08(data_ov006_021bc808) == 0) {
            *(uint32_t *)(data_ov006_021bc808 + 0x204) += 4;
            return;
        }
        if (data_ov006_021bc808[0xa93] == 0) {
            *(uint32_t *)(data_ov006_021bc808 + 0x204) += 1;
        } else {
            *(uint32_t *)(data_ov006_021bc808 + 0x204) = 0;
            if (func_ov006_021b2698() != 3) {
                data_ov006_021bc808[0xa90] = 0x1b;
                return;
            }
        }
        {
            uint16_t i;
            for (i = 0; i < 2; i++) {
                uint32_t r = func_ov006_021b2ae8(i);
                if (r != 0) {
                    func_02084ca4(r, data_ov006_021bc808 + 0x100 + i * 0x44, 0x44);
                    ((uint32_t *)(data_ov006_021bc808 + 0x208))[i] = 1;
                } else {
                    ((uint32_t *)(data_ov006_021bc808 + 0x208))[i] = 0;
                }
            }
        }
    }
}
