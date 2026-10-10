#include "ffc/types.h"

extern int func_020055a4(void *a, int b);

int func_ov007_021ab598(uint8_t *p, int n)
{
    return func_020055a4(*(void **)(*(uint8_t **)(p + 0x80) + 0x50), n - 1);
}
