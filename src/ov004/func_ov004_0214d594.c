#include "ffc/types.h"

extern int32_t func_ov004_0215313c(void *p);
extern void func_ov004_02153114(void *p);
extern int32_t func_ov004_0214f76c(void);
extern void func_ov004_02153568(void *p, int32_t v);

void func_ov004_0214d594(uint8_t *self)
{
    void *obj;
    void **vt;

    if (func_ov004_0215313c(*(void **)(self + 0x94)) != 0) {
        return;
    }
    func_ov004_02153114(*(void **)(self + 0x94));
    if (func_ov004_0214f76c() != 0) {
        return;
    }
    obj = *(void **)(self + 0x9c);
    vt = *(void ***)obj;
    ((void (*)(void *, int32_t, int32_t))vt[0x38 / 4])(obj, 5, 1);
    func_ov004_02153568(*(void **)(self + 0x94), 5);
}
