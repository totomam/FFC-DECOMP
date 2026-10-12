#include "ffc/types.h"

extern uint8_t *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3ed4(uint32_t a, uint8_t *b, uint32_t c);
extern int func_ov006_021a6524(void);
extern uint32_t func_ov006_021b3888(uint32_t a, uint32_t b, uint32_t c);
extern void func_0207838c(uint8_t *a, uint32_t b);
extern uint8_t *data_ov006_021bc820;
extern uint32_t data_ov006_021ba050[];
extern uint32_t data_ov006_021ba058[];

void func_ov006_021b415c(void)
{
    uint32_t off = 0x1a << 6;
    int i;

    data_ov006_021bc820 = func_ov006_021b49e4(off, 4);
    *(uint32_t *)(data_ov006_021bc820 + off - 0x10) =
        func_ov006_021b3ed4(0x20, data_ov006_021bc820 + 0x10, 0x30);

    if (func_ov006_021a6524() == 6) {
        for (i = 0; i < 2; i++) {
            *(uint32_t *)(data_ov006_021bc820 + off - 0xc + i * 4) =
                func_ov006_021b3888(data_ov006_021ba050[i], 0, 4);
            func_0207838c(data_ov006_021bc820 + i * 8,
                *(uint32_t *)(data_ov006_021bc820 + off - 0xc + i * 4));
        }
    } else {
        for (i = 0; i < 2; i++) {
            *(uint32_t *)(data_ov006_021bc820 + off - 0xc + i * 4) =
                func_ov006_021b3888(data_ov006_021ba058[i], 0, 4);
            func_0207838c(data_ov006_021bc820 + i * 8,
                *(uint32_t *)(data_ov006_021bc820 + off - 0xc + i * 4));
        }
    }
}
