#include "ffc/types.h"

extern void func_ov003_021504a4(void *p);

void func_ov003_021601b4(void *p)
{
    uint8_t *a = *(uint8_t **)((uint8_t *)p + 0x80);
    uint8_t *b = *(uint8_t **)(a + 0x180);
    void *v = *(void **)(b + 0xa0);
    if (v != 0) {
        func_ov003_021504a4(v);
    }
}
