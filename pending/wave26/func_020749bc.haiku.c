#include "ffc/types.h"

extern void func_02074c04(void *p);
extern void func_02074a5c(void *p);
extern void func_02054844(void *p);
extern uint8_t data_020b2658[];
extern uint8_t data_020b266c[];

void *func_020749bc(void *r0)
{
    uint8_t *self = (uint8_t *)r0;
    void **obj;

    *(void **)(self + 0x00) = (void *)data_020b2658;
    *(void **)(self + 0x14) = (void *)data_020b266c;
    func_02074c04(self);
    func_02074a5c(self);
    obj = *(void ***)(self + 0x2c);
    if (obj != 0) {
        void **vt = (void **)*obj;
        ((void (*)(void *))vt[1])(obj);
    }
    *(void **)(self + 0x2c) = 0;
    func_02054844(self + 0x14);
    return self;
}
