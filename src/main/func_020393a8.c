#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Obj;

extern void *func_020095b8(void *object, uint32_t x);
extern void func_020511e8(void *dst, void *src);
extern void func_020392ac(void *dst, void *src, uint32_t x);
extern void func_02051248(void *a, void *b);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);

void func_020393a8(void *p0, uint32_t p1, uint32_t p2)
{
    Obj a;
    Obj b;
    Obj c;

    func_020095b8(&a, p1);
    func_020511e8(&b, &a);
    func_020392ac(&c, &b, p2);
    func_02051248(p0, &c);
    func_0200a678(&c);
    func_0200a678(&b);
    func_020059cc(&a);
}
