#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern void *func_ov003_0215249c(void *x);
extern void *func_ov003_02152cf4(void *x);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0214d454(uint8_t *a)
{
    void *obj = func_0203b688(a);
    void *p = func_ov003_0215249c(*(void **)(a + 0x184));
    void *q = func_ov003_02152cf4(*(void **)(a + 0x180));
    func_02056bc0(obj, q);
    func_02056bc0(obj, p);
    return obj;
}
