/* cflags: -O1 */
#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { uint8_t pad[0x44]; int32_t x, y; } G;
extern G data_ov004_02159448;
void func_ov004_021512f4(P *out, P p)
{
    G *g = &data_ov004_02159448;
    int32_t dx = p.x - g->x;
    int32_t dy = p.y - g->y;
    out->x = dx * 4 - 2;
    out->y = dy * 8 - 4;
}
