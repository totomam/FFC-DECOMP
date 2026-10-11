#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} V2;

typedef struct {
    uint8_t pad[0x20];
    int32_t px;
    int32_t py;
    int32_t ax;
    int32_t ay;
} Obj;

void func_02065d88(Obj *p, V2 v)
{
    V2 l = v;
    p->ax = p->ax + (l.x - p->px);
    p->ay = p->ay + (l.y - p->py);
    p->px = l.x;
    p->py = l.y;
}
