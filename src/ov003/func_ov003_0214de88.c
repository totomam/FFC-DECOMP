#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

uint16_t func_ov003_0214de88(uint8_t *self, uint32_t idx)
{
    void *p = func_02052d90(*(void **)(self + 0x358), *(uint32_t *)(self + 0x35c));
    uint32_t off = *(uint32_t *)((uint8_t *)p + 8);
    return *(uint16_t *)((uint8_t *)p + off + (idx << 3) + 2);
}
