#include "ffc/types.h"

extern int32_t func_02024928(int32_t a, void *b);
extern int32_t func_0202490c(int32_t a);
extern void func_02024abc(int32_t a, int32_t b, void *c);
extern int32_t func_02023078(void *a);
extern void func_02080194(void *v, int32_t x, int32_t y);
extern void func_02080498(void *a, void *b, void *c);
extern uint8_t data_ov003_0217a14c[];
extern int16_t data_020a1bd0[];

typedef struct Vec3 {
    int32_t x, y, z;
} Vec3;

typedef struct Loc {
    int32_t s;
    int32_t m[9];
    Vec3 t;
    Vec3 pos;
} Loc;

Vec3 func_ov003_0215b62c(uint8_t *obj)
{
    Loc l;
    int32_t k;
    int32_t idx;

    k = func_02024928(*(int32_t *)(*(uint8_t **)(obj + 0x110) + 0x34), data_ov003_0217a14c);
    if (k < 0) {
        k = func_0202490c(*(int32_t *)(*(uint8_t **)(obj + 0x110) + 0x34)) - 1;
    }
    if (k <= 0) {
        k = 0;
    }
    func_02024abc(*(int32_t *)(*(uint8_t **)(obj + 0x110) + 0x34), k, &l.pos);
    l.s = func_02023078(*(void **)(obj + 0x10c));
    idx = *(int32_t *)(obj + 0x2ec) >> 4;
    func_02080194(&l.m, data_020a1bd0[idx * 2], data_020a1bd0[idx * 2 + 1]);
    func_02080498(obj + 0x2e0, &l.m, &l.t);
    func_02080498(&l.t, (void *)l.s, &l.t);
    l.pos.x = l.pos.x + l.t.x;
    l.pos.y = l.pos.y + l.t.y;
    l.pos.z = l.pos.z + l.t.z;
    return l.pos;
}
