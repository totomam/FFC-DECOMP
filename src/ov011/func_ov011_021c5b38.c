#include "ffc/types.h"

extern void func_ov011_021c5a68(void *p);

void func_ov011_021c5b38(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0xf8);
    *q = 0xffffffff;
    func_ov011_021c5a68(p);
}
