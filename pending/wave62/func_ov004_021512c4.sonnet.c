#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { int32_t a, b; } R;
extern struct { uint8_t pad[0x34]; int32_t x, y; } data_ov004_02159448;
void func_ov004_021512c4(R *o, P p)
{
    int32_t py = p.y;
    int32_t gx = data_ov004_02159448.x;
    int32_t gy = data_ov004_02159448.y;
    int32_t dy = py - gy;
    int32_t dx = p.x - gx;
    o->a = dx * 8 + ((dy & 1) * 8) / 2;
    o->b = dy * 8;
}
