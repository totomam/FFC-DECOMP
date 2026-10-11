#include "ffc/types.h"

extern void func_02056bf4(void *p);

void func_ov003_021464b4(uint8_t *s)
{
    void **obj;

    obj = *(void ***)(s + 0x1b0);
    if (obj == 0) {
        return;
    }
    if (*(uint32_t *)(s + 0x1d8) != 0) {
        return;
    }
    func_02056bf4(s + 0x48);
    obj = *(void ***)(s + 0x1b0);
    if (obj == 0) {
        return;
    }
    if (obj != 0) {
        void (*fn)(void *) = (void (*)(void *))(((void **)*obj)[1]);
        fn(obj);
    }
    *(void **)(s + 0x1b0) = 0;
}
