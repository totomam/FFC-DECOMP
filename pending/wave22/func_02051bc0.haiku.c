#include "ffc/types.h"

extern void func_020095b8(void *p, void *a);
extern void *func_02051bec(void *p, void *b, int c);
extern void *func_020059cc(void *object);

void *func_02051bc0(void *a, void *b)
{
    uint32_t buf[3];
    void *r;
    func_020095b8(buf, a);
    r = func_02051bec(buf, b, 0);
    func_020059cc(buf);
    return r;
}
