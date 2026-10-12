#include "ffc/types.h"

extern void func_020095b8(void *object);
extern void func_02051060(void *out, void *a, void *b);
extern void func_02068b9c(void *object, void *arg);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);

typedef void *(*VFn)(void *);

void func_020686e8(void *self)
{
    uint32_t a[3];
    uint32_t b[3];
    void *o;
    VFn fn;
    void *v;
    uint32_t c;

    func_020095b8(a);
    o = *(void **)((uint8_t *)self + 0x20);
    fn = *(VFn *)(*(void **)o);
    v = fn(o);
    func_02051060(b, a, v);
    func_02068b9c((uint8_t *)self + 0x4c, b);
    func_0200a678(b);
    func_020059cc(a);
    c = *(uint32_t *)((uint8_t *)self + 0xc);
    c &= ~0xffu;
    *(uint32_t *)((uint8_t *)self + 0xc) = c;
}
