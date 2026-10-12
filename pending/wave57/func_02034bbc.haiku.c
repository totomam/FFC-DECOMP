#include "ffc/types.h"

extern void func_0200a5dc(void *dst, void *src);
extern void func_020613e4(void *out, void *obj, void *vec, int zero, int zero2);
extern void func_0200a678(void *object);
extern void func_0206872c(void *obj, void *vec);
extern int func_0201bd84(void *data, int n);
extern void *data_020b93b8;

int func_02034bbc(uint8_t *p, int32_t a, int32_t b, void *c, int32_t d, int32_t e, ...) {
    int32_t vec14[5];
    int32_t vec20[3];
    int32_t out;
    int32_t args[2];
    int32_t y;
    int32_t x;
    int32_t h;
    uint32_t idx;
    void *obj;

    y = *(int32_t *)(p + 0xcc) + b;
    h = (d * e) / 2;
    x = *(int32_t *)(p + 0xc8) + a + h;
    func_0200a5dc(vec20, c);
    func_020613e4(&out, *(void **)(p + 0x84), vec20, 0, 0);
    func_0200a678(vec20);
    args[0] = x - out / 2;
    args[1] = y - 7;
    idx = *(uint32_t *)(p + 0xe0);
    if (!(idx < *(uint32_t *)(p + 0xe4))) {
        return 0;
    }
    func_0200a5dc(vec14, c);
    func_0206872c(*(void **)(p + 0x8c + idx * 4), vec14);
    func_0200a678(vec14);
    obj = *(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4);
    ((void (*)(void *, int32_t, int32_t))((*(void ***)obj)[3]))(obj, args[0], args[1]);
    if (func_0201bd84(data_020b93b8, 0x54) != 0) {
        obj = *(void **)(p + 0x8c + *(uint32_t *)(p + 0xe0) * 4);
        if (p[0x80]) {
            ((void (*)(void *))((*(void ***)obj)[10]))(obj);
        } else {
            ((void (*)(void *))((*(void ***)obj)[11]))(obj);
        }
    }
    *(uint32_t *)(p + 0xe0) = *(uint32_t *)(p + 0xe0) + 1;
    return 1;
}
