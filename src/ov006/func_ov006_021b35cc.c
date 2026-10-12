#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;

void func_ov006_021b35cc(void) {
    int i;
    for (i = 0; i < 16; i++) {
        uint8_t *base = data_ov006_021bc808;
        if (*(uint32_t *)(base + 0x208 + i * 4) != 0) {
            uint8_t *p = base + 0x100 + i * 0x44;
            if (i == 1) {
                if (base[0xa93] == 1) {
                    if (*(uint16_t *)p != 0x10) {
                        return;
                    }
                    *(uint32_t *)(base + 0xa94) = *(uint32_t *)(base + 0xa94) + 1;
                    base = data_ov006_021bc808;
                    if (!(*(uint32_t *)(base + 0xa94) & 1)) {
                        *(uint16_t *)(base + 0x200) = *(uint16_t *)(base + 0x200) + 1;
                        base = data_ov006_021bc808;
                        if (*(uint16_t *)(base + 0x200) >= 0x24) {
                            *(uint16_t *)(base + 0x200) = 0;
                        }
                    }
                } else {
                    *(uint16_t *)(base + 0x202) = 0xbc;
                    if (*(uint16_t *)p == 0xbd) {
                        base = data_ov006_021bc808;
                        base[0xa93] = 1;
                        base = data_ov006_021bc808;
                        *(uint16_t *)(base + 0x200) = 0;
                        base = data_ov006_021bc808;
                        *(uint32_t *)(base + 0xa94) = 0;
                    }
                }
            }
        }
    }
}
