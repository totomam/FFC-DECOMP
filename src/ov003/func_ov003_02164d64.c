#include "ffc/types.h"

extern uint32_t func_0203c250(void);
extern int32_t func_02060e9c(void);
extern uint32_t func_0203c2d0(void);
extern void func_02060e80(void *object);
extern void func_02060548(void *object, int32_t v);
extern void func_02060574(void *object, int32_t v);
extern void func_0206056c(void *object, int32_t v);

void func_ov003_02164d64(void)
{
    uint32_t a = func_0203c250();
    int32_t r = func_02060e9c();
    uint32_t b = func_0203c2d0();

    if (r != 0) {
        func_02060e80((void *)a);
        if (r == 1) {
            func_02060548((void *)b, 2);
        } else if (r == -2) {
            func_02060548((void *)b, 3);
        }
        func_02060574((void *)b, 9);
        func_0206056c((void *)b, 0x10);
    }
}
