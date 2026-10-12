#include "ffc/types.h"

extern void func_020095b8(void *obj, uint32_t x);
extern void func_02051060(void *out, void *obj, uint32_t v);
extern void func_020613e4(void *a, void *b, void *c, uint32_t d, uint32_t e);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);

void func_0206139c(void *p0, void *p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    uint32_t obj[3];
    uint32_t tmp[3];
    uint32_t r;
    void *o;

    func_020095b8(obj, p2);
    o = p1;
    r = ((uint32_t (*)(void *))(((void **)*(void **)o)[0]))(o);
    func_02051060(tmp, obj, r);
    func_020613e4(p0, p1, tmp, p3, p4);
    func_0200a678(tmp);
    func_020059cc(obj);
}
