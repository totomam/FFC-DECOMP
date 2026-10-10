#include "ffc/types.h"

extern void func_ov009_021a32dc(void *a, void *b, int flag, void *d, uint32_t e);
extern uint8_t data_ov009_021af254[];

void func_ov009_021a3370(void *a, void *b, uint32_t c)
{
    func_ov009_021a32dc(a, b, 1, data_ov009_021af254, c);
}
