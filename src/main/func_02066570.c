#include "ffc/types.h"

typedef struct Tex {
    uint32_t pad0;
    uint8_t *data;
    uint32_t pad2[3];
    uint32_t pitch;
} Tex;

typedef struct Outer {
    uint8_t pad[0x2c];
    Tex *tex;
    uint32_t pad2;
    uint32_t stride;
} Outer;

void func_02066570(Outer *this, int32_t x, int32_t y, uint32_t val) {
    Tex *tex = this->tex;
    uint32_t sh;
    uint32_t *p;
    uint32_t old;
    int32_t idx = (x >> 3) + (y >> 3) * (int32_t)this->stride;
    p = (uint32_t *)(tex->data + idx * tex->pitch + (((uint32_t)y & 7) << 2));
    sh = ((uint32_t)x & 7) << 2;
    old = *p & ~(0xfu << sh);
    *p = old | (val << sh);
}
