#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void *func_ov000_021653d4(uint32_t size);
extern void func_02090380(void *destination, const void *source, uint32_t length);

void *func_ov000_021658c0(const uint8_t *text)
{
    uint32_t len;
    void *dst;

    if (text == 0) {
        return 0;
    }
    len = func_02092864(text);
    dst = func_ov000_021653d4(len + 1);
    if (dst != 0) {
        func_02090380(dst, text, len + 1);
    }
    return dst;
}
