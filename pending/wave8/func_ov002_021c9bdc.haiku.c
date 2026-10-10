#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

void *func_ov002_021c9bdc(uint32_t *p)
{
    return func_02052d90((const void *)p[1], p[2]);
}
