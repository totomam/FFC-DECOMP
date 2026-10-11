#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern const uint8_t data_ov001_0219430c[];

void func_ov001_021870a0(uint8_t **dst, const uint8_t *src, uint32_t *off)
{
    uint32_t len;

    if (src == 0) {
        src = data_ov001_0219430c;
    }
    len = func_02092864(src) + 1;
    func_02090380(*dst, src, len);
    *off += len;
    *dst += len;
}
