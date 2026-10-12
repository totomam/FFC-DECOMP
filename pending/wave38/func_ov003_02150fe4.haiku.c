#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct {
    uint32_t w;
    Vec t;
} Frame;

extern void func_ov003_02151158(Vec *t);
extern void func_ov003_0215113c(Vec *t);

void func_ov003_02150fe4(Vec *v) {
    Frame f;
    uint32_t *src;
    uint32_t *end;
    uint32_t *dst;
    uint32_t tmp;

    *((uint8_t *)&f.w + 2) = 0;
    f.t.data = 0;
    f.t.count = 0;
    f.t.cap = 0;
    func_ov003_02151158(&f.t);

    src = v->data;
    end = (uint32_t *)((uint8_t *)v->data + v->count * 8);
    dst = (uint32_t *)((uint8_t *)f.t.data + f.t.count * 8);
    while (src < end) {
        if (dst != 0) {
            dst[0] = src[0];
            dst[1] = src[1];
        }
        f.t.count++;
        src += 2;
        dst += 2;
    }

    v->count = 0;
    tmp = v->cap;
    v->cap = f.t.cap;
    f.t.cap = tmp;
    tmp = (uint32_t)v->data;
    v->data = f.t.data;
    f.t.data = (uint32_t *)tmp;
    v->count = f.t.count;
    f.t.count = 0;

    func_ov003_0215113c(&f.t);
}
