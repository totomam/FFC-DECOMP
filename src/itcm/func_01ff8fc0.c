#include "ffc/types.h"

extern void func_020848b8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_01ff8f28(uint32_t ch, uint32_t src, uint32_t dst, uint32_t cnt, uint32_t zero);

void func_01ff8fc0(uint32_t ch, uint32_t src, uint32_t size)
{
    uint32_t chunk;
    volatile uint32_t *ctrl;

    if (size == 0) {
        return;
    }
    func_020848b8(ch, src, size, 0);
    ctrl = (volatile uint32_t *)(0x40000b0 + (((ch * 3) + 2) << 2));
    while (*ctrl & 0x80000000) {
    }
    while (size != 0) {
        chunk = (size > 0x1d8) ? 0x1d8 : size;
        func_01ff8f28(ch, src, 0x4000400, 0x84400000 | (chunk >> 2), 0);
        size -= chunk;
        src += chunk;
    }
    while (*ctrl & 0x80000000) {
    }
}
