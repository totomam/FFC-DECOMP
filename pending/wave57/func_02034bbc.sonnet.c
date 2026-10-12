#include "ffc/types.h"

typedef struct { int32_t x, y; } P2;
typedef struct { int32_t v[3]; } V3;
extern void func_0200a5dc(void *dst, void *src);
extern P2 func_020613e4(void *obj, void *vec, int z, int z2);
extern void func_0200a678(void *object);
extern void func_0206872c(void *obj, void *vec);
extern int func_0201bd84(void *data, int n);
extern void *data_020b93b8;

int func_02034bbc(uint8_t *p, P2 o, void *c, P2 s) {
    V3 v2, v1;
    P2 sz, pos;
    int32_t x, y;
    y = *(int32_t *)(p + 0xcc) + o.y;
    x = *(int32_t *)(p + 0xc8) + o.x + (s.y * s.x) / 2;
    void *obj;
    func_0200a5dc(&v2, c);
    sz = func_020613e4(*(void **)(p + 0x84), &v2, 0, 0);
    func_0200a678(&v2);
    pos.x = x - sz.x / 2;
    pos.y = y - 7;
    if (!(*(uint32_t *)(p + 0xe0) < *(uint32_t *)(p + 0xe4))) return 0;
    func_0200a5dc(&v1, c);
    func_0206872c(*(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4), &v1);
    func_0200a678(&v1);
    obj = *(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4);
    ((void (*)(void *, P2))((*(void ***)obj)[3]))(obj, pos);
    if (func_0201bd84(data_020b93b8, 0x54) != 0) {
        if (p[0x80]) {
            obj = *(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4);
            ((void (*)(void *))((*(void ***)obj)[10]))(obj);
        } else {
            obj = *(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4);
            ((void (*)(void *))((*(void ***)obj)[11]))(obj);
        }
    }
    *(uint32_t *)(p + 0xe0) = *(uint32_t *)(p + 0xe0) + 1;
    return 1;
}
