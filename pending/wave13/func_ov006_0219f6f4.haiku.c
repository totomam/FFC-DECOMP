#include "ffc/types.h"

extern uint32_t data_ov006_021bafc0[];

int func_ov006_0219f6f4(int a)
{
    void (*fn)(int);
    fn = (void (*)(int))((uint32_t *)data_ov006_021bafc0)[1];
    if (fn != 0) {
        fn(a);
    }
    return 0;
}
