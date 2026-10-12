#include "ffc/types.h"

extern void func_020849c4(void *src, void *dst, uint32_t n);

typedef struct { uint16_t a : 3; uint16_t b : 13; } BF3;
typedef struct { uint8_t a : 4; uint8_t b : 4; } BF4;

void func_02088b50(uint8_t *p0) {
    uint8_t *g = (uint8_t *)0x02fffc80;
    p0[0] = ((BF3 *)(g + 0x64))->a;
    p0[1] = ((BF4 *)(g + 2))->a;
    p0[2] = g[3];
    p0[3] = g[4];
    *(uint16_t *)(p0 + 0x1a) = g[0x1a];
    *(uint16_t *)(p0 + 0x52) = g[0x50];
    func_020849c4(g + 6, p0 + 4, 0x14);
    func_020849c4(g + 0x1c, p0 + 0x1c, 0x34);
    *(uint16_t *)(p0 + 0x18) = 0;
    *(uint16_t *)(p0 + 0x50) = 0;
}
