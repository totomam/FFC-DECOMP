#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

void func_ov001_02187160(uint8_t **dst, const void *src, uint32_t len, uint32_t *cnt)
{
    func_02090380(*dst, src, len);
    *cnt += len;
    *dst += len;
}
