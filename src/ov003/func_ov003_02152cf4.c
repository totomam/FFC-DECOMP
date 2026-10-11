#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_02152cf4(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *r4 = func_0203b688();
    void *a = func_02056b10(*(void **)(p + 0xbc));
    void *b = func_02056b10(*(void **)(p + 0xc0));
    func_02056bc0(r4, b);
    func_02056bc0(r4, a);
    return r4;
}
