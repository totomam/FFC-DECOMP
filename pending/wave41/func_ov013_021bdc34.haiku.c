#include "ffc/types.h"

void func_ov013_021bdc34(uint8_t *self, uint8_t *msg) {
    uint32_t id = *(uint32_t *)(msg + 0xc);
    switch (id) {
    case 0x100ab:
        *(uint32_t *)(*(uint8_t **)(self + 0xc8) + 0xc) = *(uint32_t *)(msg + 0x10);
        *(uint32_t *)(*(uint8_t **)(self + 0xc8) + 0x10) = *(uint32_t *)(msg + 0x14);
        *(uint32_t *)(*(uint8_t **)(self + 0xc8) + 0x14) = *(uint32_t *)(msg + 0x18);
        *(uint32_t *)(*(uint8_t **)(self + 0xc8) + 0x18) = *(uint32_t *)(msg + 0x1c);
        self[0x100] = 1;
        break;
    case 0x100ac: {
        uint8_t *base = *(uint8_t **)(self + 0xc8);
        uint8_t *e = base + 0x24 + *(uint32_t *)(msg + 0x10) * 12;
        e[0] = msg[0x14];
        e[1] = msg[0x15];
        *(uint32_t *)(e + 4) = *(uint32_t *)(msg + 0x18);
        *(uint32_t *)(e + 8) = *(uint32_t *)(msg + 0x1c);
        self[*(uint32_t *)(msg + 0x10) + 0x101] = 1;
        break;
    }
    }
}
