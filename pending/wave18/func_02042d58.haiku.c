#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern void *func_ov003_0214d454(void *v);
extern void func_02056bc0(void *object, void *node);

void *func_02042d58(void *a) {
    void *r4;
    void *r1;
    void **p;

    r4 = func_0203b688(a);
    p = (void **)((uint8_t *)a + 0x8c);
    r1 = func_ov003_0214d454(*p);
    func_02056bc0(r4, r1);
    return r4;
}
