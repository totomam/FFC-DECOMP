/* cflags: -lang c++ */
#include "ffc/types.h"
struct Vec { uint32_t *data; uint32_t count; uint32_t cap; };
struct Al { uint8_t a; };
static inline void init(Al *p) { p->a = 0; }
extern "C" void func_ov003_02151158(Vec *t, int x, Al a);
extern "C" void func_ov003_0215113c(Vec *t);
extern "C" void func_ov003_02150fe4(Vec *v, int r1) {
    struct F { uint32_t w; Vec t; } f;
    Vec &t = f.t;
    *((uint8_t *)&f.w + 2) = 0;
    Al al; al.a = *((uint8_t *)&f.w + 2);
    t.data = 0; t.count = 0; t.cap = 0;
    func_ov003_02151158(&t, r1, al);
    uint32_t *src = v->data;
    uint32_t *end = (uint32_t *)((uint8_t *)v->data + v->count * 8);
    uint32_t *dst = (uint32_t *)((uint8_t *)t.data + t.count * 8);
    while (src < end) {
        if (dst != 0) { dst[0] = src[0]; dst[1] = src[1]; }
        t.count++; src += 2; dst += 2;
    }
    v->count = 0;
    uint32_t tmp = v->cap; v->cap = t.cap; t.cap = tmp;
    uint32_t *p = v->data; v->data = t.data; t.data = p;
    v->count = t.count; t.count = 0;
    func_ov003_0215113c(&t);
}
