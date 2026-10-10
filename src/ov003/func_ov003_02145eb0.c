#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void *func_ov003_02145eb0(uint32_t *p)
{
    return func_02052d90((const void *)p[1], p[2]);
}
