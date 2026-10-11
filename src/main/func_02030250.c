#include "ffc/types.h"

extern void func_02092878(void *p, uint32_t v);
extern void func_02092924(void *p, uint8_t *q);

void func_02030250(uint8_t *a, void *b, uint32_t c)
{
    func_02092878(b, c);
    func_02092924(b, a + 0x10a);
}
