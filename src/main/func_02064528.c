#include "ffc/types.h"

void func_02064528(uint8_t *self) {
    uint32_t i;
    uint32_t n;
    uint8_t *ent;
    uint8_t *buf;
    uint32_t off;

    *(uint8_t *)(self + 0x2d) = 1;
    n = *(uint32_t *)(self + 0x28);
    i = 0;
    while (i < n) {
        ent = *(uint8_t **)(self + 0x60) + i * 0x1c;
        buf = *(uint8_t **)(self + 0x24);
        off = *(uint32_t *)(ent + 0xc) * 0x28;
        *(uint32_t *)(buf + off) = (*(uint32_t *)(buf + off) & 0xfffffcffu) | 0x200u;
        i++;
        n = *(uint32_t *)(self + 0x28);
    }
}
