#include "ffc/types.h"

extern void func_ov003_02158264(void *self, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    uint32_t pad[4];
    Vec2 tmp;
} Frame;

void func_ov003_0215abf8(uint8_t *self, Vec2 *in)
{
    Frame f;
    Vec2 *base;

    f.tmp.x = 0;
    f.tmp.y = 0;
    if (in == 0) {
        in = &f.tmp;
    }
    base = *(Vec2 **)(self + 0x36c);
    if (base == 0) {
        base = in;
    }
    *(int32_t *)(self + 0xb4) = base->x - in->x;
    *(int32_t *)(self + 0xb8) = base->y - in->y;
    *(uint32_t *)(self + 0x104) = 0;
    *(uint16_t *)(self + 0xbc) = 0;
    func_ov003_02158264(self, 0, 0x4000, 0);
}
