#include "ffc/types.h"

extern void func_ov002_021c95bc(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_ov002_021d4878[];
extern uint32_t data_ov002_021d4890[];

void *func_ov002_02197b54(void *a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)a;
    func_ov002_021c95bc(a, b, c, 1);
    *(uint32_t *)(p + 0x10C) = 0xa21b58b6;
    *(uint32_t *)(p + 0x110) = 0x50434342;
    *(uint32_t *)(p + 0x114) = 0x5a1bb469;
    *(uint32_t **)(p + 0) = data_ov002_021d4878;
    *(uint32_t **)(p + 0x80) = data_ov002_021d4890;
    return a;
}
