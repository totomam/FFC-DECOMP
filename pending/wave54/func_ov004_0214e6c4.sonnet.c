#include "ffc/types.h"

extern uint32_t func_ov004_0215311c(uint32_t v);
extern void func_02021b48(uint32_t a, uint32_t b);
extern void func_02021338(uint32_t a);
extern uint32_t func_ov004_02153514(uint32_t v);
extern void func_01ffdd50(void *out, uint32_t v);
extern uint32_t func_01ffdbac(uint32_t obj, void *p);
extern uint32_t data_ov004_02159448[];
extern uint32_t data_ov004_02159494[];

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;
extern uint32_t func_01ffdc1c(uint32_t obj, Vec2 v, int32_t flag);

typedef struct { uint32_t a, b; } P2;
int32_t func_ov004_0214e6c4(uint8_t *self, uint32_t idx, Vec2 p)
{
    Vec2 *arr;
    uint8_t *q;
    int need;
    int32_t oo[2];
    Vec2 L[5];
    Vec2 *tp, *up;
    uint32_t r;

    {
        uint32_t v = func_ov004_0215311c(*(uint32_t *)(self + 0x88));
        func_02021b48(v, 0x15);
    }
    func_02021338(0xa2);

    if (idx == func_ov004_02153514(*(uint32_t *)(self + 0x88))) {
        if (*(uint32_t *)(self + 0x94) != 0) {
            P2 *c;
            need = 1;
            q = *(uint8_t **)(self + 0xa8);
            c = (P2 *)(q + 0x80);
            uint32_t *g = data_ov004_02159494;
            if (c->a == data_ov004_02159448[19]) {
                if (c->b == g[1] || *(uint32_t *)(q + 0x80) == 0) {
                    need = 0;
                }
            }
            if (need) {
                tp = &L[3];
                func_01ffdd50(tp, *(uint32_t *)(self + 0x90));
                L[4].x = tp->x + p.x;
                L[4].y = tp->y + p.y;
                func_01ffdc1c(*(uint32_t *)(self + 0x94), L[4], 1);
            }
        }
        up = &L[1];
        func_01ffdd50(up, *(uint32_t *)(self + 0x90));
        L[2].x = up->x + p.x;
        L[2].y = up->y + p.y;
        r = func_01ffdc1c(*(uint32_t *)(self + 0x90), L[2], 1);
        func_01ffdd50(&L[0], *(uint32_t *)(self + 0x90));
        arr = (Vec2 *)(self + 0x158);
        { int32_t *zp = (int32_t *)(self + idx * 8); zp[0x56] = L[0].x; zp[0x57] = L[0].y; }
        return (int32_t)r;
    } else {
        int32_t *px = (int32_t *)(self + 0x158);
        int32_t *py = (int32_t *)(self + 0x15c);
        uint32_t i = idx * 2;
        oo[1] = *(volatile int32_t *)&px[i];
        oo[0] = *(volatile int32_t *)&py[i];
        px[i] += p.x;
        py[i] += p.y;
        func_01ffdbac(*(uint32_t *)(self + 0x90), &px[i]);
        if (px[i] != oo[1] || py[i] != oo[0]) {
            return 1;
        }
        return 0;
    }
}
