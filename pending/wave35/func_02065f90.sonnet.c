/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a; uint32_t b; };
struct Obj { virtual uint32_t f0(); };
extern "C" {
extern void func_020095b8(void *p, uint32_t v);
extern void func_02051060(void *dst, void *src, uint32_t v);
extern void func_02065fe0(void *self, void *obj, Pair p, uint32_t c, void *d);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);
void func_02065f90(void *self, Obj *obj, Pair p, uint32_t c, uint32_t d);
void func_02065f90(void *self, Obj *obj, Pair p, uint32_t c, uint32_t d)
{
    uint32_t t7[3];
    uint32_t t6[3];
    func_020095b8(t7, d);
    uint32_t x = obj->f0();
    func_02051060(t6, t7, x);
    func_02065fe0(self, obj, p, c, t6);
    func_0200a678(t6);
    func_020059cc(t7);
}
}
