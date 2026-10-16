#include "ffc/types.h"
typedef struct { int32_t x, y; } Pt;
typedef struct { Pt a, b; } Rect;
void func_ov008_0219e580(Rect *o, uint8_t *p) {
    int32_t y = *(int32_t*)(p + 0x98);
    int32_t x = *(int32_t*)(p + 0x94);
    Rect A, B;
    A.a.x = x + 0x18; A.a.y = y + 0x18;
    B.a = A.a;
    A.b.x = x - 0x18; A.b.y = y - 0x18;
    B.b = A.b;
    o->a = B.b; o->b = A.a;
}
