#include "ffc/types.h"

extern int func_ov000_02167c24(uint32_t a, void *b, void *c, uint32_t d);
extern uint8_t data_ov007_021c8ffc[];
extern uint8_t data_ov007_021c9000[];

int func_ov007_021c07d8(uint32_t *p)
{
    func_ov000_02167c24(p[6], data_ov007_021c8ffc, data_ov007_021c9000, *(uint32_t *)p[2]);
    return 0;
}
