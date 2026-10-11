#include "ffc/types.h"

typedef struct {
    uint32_t w[3];
} Tmp;

extern void func_0203919c(Tmp *out, void *p);
extern void func_020095b8(Tmp *out, Tmp *in);
extern void *func_02039420(Tmp *t);
extern void *func_020059cc(void *object);

void *func_020393ec(void *p)
{
    Tmp b;
    Tmp a;
    void *r;

    func_0203919c(&b, p);
    func_020095b8(&a, &b);
    r = func_02039420(&a);
    func_020059cc(&a);
    func_020059cc(&b);
    return r;
}
