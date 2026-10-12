#include "ffc/types.h"

typedef struct { uint32_t x, y, z; } V3;

extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02005988(V3 *dst, void *src);
extern void func_020095b8(V3 *dst, V3 *src);
extern void func_02050ea4(V3 *dst, V3 *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_0203d578(V3 *dst, V3 *a, V3 *b, uint32_t flag);
extern void func_02050ffc(V3 *dst, V3 *src, uint32_t n);
extern void func_0200b65c(V3 *dst, V3 *src);
extern void *func_0205681c(uint32_t size);
extern void *func_02033338(void *obj, V3 *a, void *b, uint32_t c);
extern void *func_02033420(void *obj, V3 *a, V3 *b);
extern void func_0200958c(V3 *obj);

void *func_0203dd5c(uint8_t *self, uint32_t idx)
{
    V3 a, c, d, e, b, f, g, h, i;
    uint8_t flagb;
    uint8_t *fp;
    uint8_t *r;
    uint8_t *ent;
    V3 *base;
    uint32_t n;
    uint32_t off;
    void *obj;
    void *res;
    uint32_t flag;

    r = func_02052d90(*(void **)(self + 0xc4), *(void **)(self + 0xc8));
    off = ((uint32_t *)(r + *(uint32_t *)(r + 8)))[idx];
    ent = r + off;
    func_02005988(&a, ent + *(uint32_t *)(ent + 4));
    func_020095b8(&b, &a);
    func_02050ea4(&c, &b, 10);
    func_020059cc(&b);
    n = c.y;
    base = (V3 *)c.x;
    func_020095b8(&d, (V3 *)((uint8_t *)base + n * 12 - 0x18));
    func_020095b8(&e, (V3 *)((uint8_t *)base + n * 12 - 0xc));
    fp = &flagb;
    *fp = 0;
    func_0203d578(&c, (V3 *)((uint8_t *)base + n * 12 - 0x18), (V3 *)((uint8_t *)base + n * 12), *fp);
    func_02050ffc(&f, &c, 10);
    func_0200b65c(&a, &f);
    func_020059cc(&f);
    res = 0;
    obj = 0;
    flag = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        func_020095b8(&g, &a);
        res = func_02033338(obj, &g, self + 0xe4, 0);
        flag = 1;
    }
    if (flag) {
        func_020059cc(&g);
    }
    func_020095b8(&h, &d);
    func_020095b8(&i, &e);
    func_02033420(res, &h, &i);
    func_020059cc(&i);
    func_020059cc(&h);
    func_020059cc(&e);
    func_020059cc(&d);
    func_0200958c(&c);
    func_020059cc(&a);
    return res;
}
