#include "ffc/types.h"

extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];

extern void func_020849ac(uint16_t c, int32_t a, int32_t w);
extern void func_020849e0(uint32_t c, int32_t a, int32_t w);
extern void func_02084a0c(uint32_t c, int32_t a, int32_t w);
extern void func_020878ac(int32_t a, int32_t w);
extern void func_02084554(int32_t k, int32_t a, uint16_t c, int32_t w, int32_t f);
extern void func_02084498(int32_t k, int32_t a, uint32_t c, int32_t w, int32_t f);

typedef struct {
    uint8_t pad0[0x14];
    int32_t base;
    int32_t stride;
    int32_t pad1;
    int32_t x0;
    int32_t y0;
    int32_t x1;
    int32_t y1;
    uint16_t color;
} Obj;

void func_0205d0bc(volatile Obj *o)
{
    int32_t y;

    if (o->x1 - o->x0 == 0) {
        return;
    }
    if (o->y1 - o->y0 == 0) {
        return;
    }
    y = o->y0;
    if (y >= o->y1) {
        return;
    }
    do {
        int32_t a, w;
        w = o->x1 - o->x0;
        a = o->base + o->x0 + o->stride * y;
        uint32_t c = o->color;
        c = c | (c << 16);

        if (data_020b055c == 0 || data_0213e018[3] != 0) {
            if (((a | w) & 3) != 0) {
                func_020849ac(c, a, w);
            } else if (w & 0x1f) {
                func_020849e0(c, a, w);
            } else {
                func_02084a0c(c, a, w);
            }
        } else {
            func_020878ac(a, w);
            if (((a | w) & 3) != 0) {
                func_02084554(3, a, c, w, 1);
            } else {
                func_02084498(3, a, c, w, 1);
            }
        }
    } while (++y < o->y1);
}
