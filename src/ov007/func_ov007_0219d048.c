#include "ffc/types.h"

extern void *func_02056aec(void *object);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219d048(uint8_t *p)
{
    uint32_t *q = *(uint32_t **)(p + 0xdc);
    uint32_t val;
    if (*q & 1) {
        val = 0x10;
    } else {
        val = 0xf;
    }
    *(uint32_t *)*(uint32_t **)(p + 0x88) = val;
    func_02056bc0(p + 0x14, func_02056aec(p));
}
