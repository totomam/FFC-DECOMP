#include "ffc/types.h"

extern void *func_ov004_02149be0(void *p);
extern void func_ov004_02153114(void *p);
extern uint32_t func_ov004_0214f78c(void);
extern uint32_t func_ov004_0214f794(void);
extern void func_ov004_0214ac54(void *p);

void func_ov004_0214accc(void *self)
{
    uint8_t *p = (uint8_t *)self;
    if (*(uint32_t *)(p + 0xa8) == 0) {
        void *q = func_ov004_02149be0(self);
        func_ov004_02153114(q);
        *(uint32_t *)(p + 0xb4) = func_ov004_0214f78c();
        q = func_ov004_02149be0(self);
        func_ov004_02153114(q);
        *(uint32_t *)(p + 0xb8) = func_ov004_0214f794();
        func_ov004_0214ac54(self);
    }
}
