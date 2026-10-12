#include "ffc/types.h"

typedef struct {
    uint8_t p0[4];
    uint16_t f4;
    uint8_t p1[0x18 - 6];
    uint16_t f18;
    uint8_t p2[0x32 - 0x1a];
    uint16_t f32;
} S;

int func_0208d9b8(S *p) {
    if (p->f4 > 0x70) {
        return 0;
    }
    if (p->f18 < 10 || p->f18 > 1000) {
        return 0;
    }
    if (p->f32 < 1 || p->f32 > 14) {
        return 0;
    }
    return 1;
}
