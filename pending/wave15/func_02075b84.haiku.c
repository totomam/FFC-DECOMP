#include "ffc/types.h"

extern void func_020737f0(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02075b48(void);

void func_02075b84(uint8_t *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t *q = *(uint8_t **)(p + 0x40);
    func_020737f0(*(void **)(q + 0x2c), b, c, d, e);
    func_02075b48();
}
