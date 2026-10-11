#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_ov001_0218dde0(void *p, int32_t i);
extern void *func_02056b34(void *x);
extern void func_02056bc0(void *object, void *node);

void *func_ov001_0218de10(void *a)
{
    void *obj = func_0203b6fc();
    int32_t i;
    for (i = 0; i < 4; i++) {
        func_02056bc0(obj, func_02056b34(func_ov001_0218dde0(a, i)));
    }
    return obj;
}
