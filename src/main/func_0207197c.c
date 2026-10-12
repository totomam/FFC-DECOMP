#include "ffc/types.h"

extern void func_02071404(uint8_t *p);
extern void func_02071a48(uint8_t *p);

uint8_t *func_0207197c(uint8_t *p)
{
    uint8_t *start = *(uint8_t **)p + *(uint32_t *)(p + 0x10) * 0x1c;
    uint8_t *end = start + *(uint32_t *)(p + 4) * 0x1c;
    while (end > start) {
        end -= 0x1c;
        func_02071404(end + 0xc);
    }
    *(uint32_t *)(p + 4) = 0;
    func_02071a48(p);
    return p;
}
