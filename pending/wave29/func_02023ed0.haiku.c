#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x34];
    uint8_t flag;
} Hdr;

void func_02023ed0(Hdr *r0, uint32_t *r1) {
    uint32_t a = (uint16_t)r1[0];
    uint32_t b = (uint16_t)r1[1];
    uint32_t c = (uint16_t)r1[2];
    uint32_t *f = (uint32_t *)r0;
    r1[0] = a;
    r1[1] = b;
    r1[2] = c;
    if (f[0x48 / 4] == a && f[0x4c / 4] == b && f[0x50 / 4] == c) {
        return;
    }
    f[0x48 / 4] = a;
    f[0x4c / 4] = r1[1];
    f[0x50 / 4] = r1[2];
    r0->flag = 0;
}
