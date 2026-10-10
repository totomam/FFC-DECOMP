#include "ffc/types.h"

typedef void (*ov004_method_fn)(void *self, int a, int b);

void func_ov004_0214adec(uint8_t *p)
{
    void *o;

    o = *(void **)(p + 0x88);
    ((ov004_method_fn)(*(void ***)o)[14])(o, 1, 0);

    o = *(void **)(p + 0x8c);
    ((ov004_method_fn)(*(void ***)o)[14])(o, 1, 0);

    o = *(void **)(p + 0x90);
    ((ov004_method_fn)(*(void ***)o)[14])(o, 1, 0);
}
