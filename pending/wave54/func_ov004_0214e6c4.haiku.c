#include "ffc/types.h"

extern uint32_t func_ov004_0215311c(uint32_t v);
extern void func_02021b48(uint32_t a, uint32_t b);
extern void func_02021338(uint32_t a);
extern uint32_t func_ov004_02153514(uint32_t v);
extern void func_01ffdd50(void *out, uint32_t v);
extern uint32_t func_01ffdc1c(uint32_t obj, int32_t x, int32_t y, int32_t flag);
extern uint32_t func_01ffdbac(uint32_t obj, void *p);
extern uint32_t data_ov004_02159448[];
extern uint32_t data_ov004_02159494[];

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

int32_t func_ov004_0214e6c4(uint8_t *self, uint32_t idx, int32_t a, int32_t b)
{
    Vec2 *arr;
    int32_t *pa = &a;
    uint8_t *q;
    uint32_t c0, c1;
    int need;
    int32_t o0, o1;

    {
        uint32_t v = func_ov004_0215311c(*(uint32_t *)(self + 0x88));
        func_02021b48(v, 0x15);
    }
    func_02021338(0xa2);

    if (idx == func_ov004_02153514(*(uint32_t *)(self + 0x88))) {
        if (*(uint32_t *)(self + 0x94) != 0) {
            q = *(uint8_t **)(self + 0xa8);
            c0 = *(uint32_t *)(q + 0x80);
            c1 = *(uint32_t *)(q + 0x84);
            need = 1;
            if (c0 == data_ov004_02159448[19]) {
                if (c1 == data_ov004_02159494[1] || c0 == 0) {
                    need = 0;
                }
            }
            if (need) {
                Vec2 t;
                func_01ffdd50(&t, *(uint32_t *)(self + 0x90));
                t.x += *pa;
                t.y += b;
                func_01ffdc1c(*(uint32_t *)(self + 0x94), t.x, t.y, 1);
            }
        }

        {
            Vec2 u;
            uint32_t r;
            func_01ffdd50(&u, *(uint32_t *)(self + 0x90));
            u.x += *pa;
            u.y += b;
            r = func_01ffdc1c(*(uint32_t *)(self + 0x90), u.x, u.y, 1);
            {
                Vec2 z;
                func_01ffdd50(&z, *(uint32_t *)(self + 0x90));
                arr = (Vec2 *)(self + 0x158);
                arr[idx] = z;
            }
            return (int32_t)r;
        }
    } else {
        arr = (Vec2 *)(self + 0x158);
        o0 = arr[idx].x;
        o1 = arr[idx].y;
        arr[idx].x += *pa;
        arr[idx].y += b;
        func_01ffdbac(*(uint32_t *)(self + 0x90), &arr[idx]);
        if (arr[idx].x == o0 && arr[idx].y == o1) {
            return 0;
        }
        return 1;
    }
}
