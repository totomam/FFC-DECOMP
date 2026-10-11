#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void *func_ov003_021540a4(void *self, uint32_t index)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *r = (uint8_t *)func_02052d90(*(void **)(p + 0xe4), *(uint32_t *)(p + 0xe8));
    return r + *(uint32_t *)(r + *(uint32_t *)(r + 0x64) + index * 4);
}
