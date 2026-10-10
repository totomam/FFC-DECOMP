#include "ffc/types.h"

extern void func_ov003_02177bb8(void *p, int b, int c);

void func_ov003_0214de54(uint8_t *self, int b, int c)
{
    void *v = *(void **)(self + 0x414);
    if (v != 0) {
        func_ov003_02177bb8(v, b, c);
    }
}
