#include "ffc/types.h"

extern void func_ov002_021c8648(uint8_t *p, uint32_t b);
extern void func_ov002_021c8650(uint8_t *p, uint32_t b);

void func_ov002_021a1324(uint8_t *a, uint32_t b)
{
    func_ov002_021c8648(a + 0x144, b);
    func_ov002_021c8650(a + 0x144, b);
}
