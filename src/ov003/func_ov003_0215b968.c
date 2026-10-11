#include "ffc/types.h"

extern void func_02056f9c(void *p);
extern void func_ov003_0215b174(void *a, uint16_t b, uint32_t c, uint8_t d);

void func_ov003_0215b968(uint8_t *p)
{
    uint16_t v;
    uint32_t flag;

    func_02056f9c(p);
    v = *(uint16_t *)(p + 0x52);
    flag = 1;
    if (v != 0 && v != 3) {
        flag = 0;
    }
    func_ov003_0215b174(*(void **)(p + 0x4c), *(uint16_t *)(p + 0x54), flag, *(uint8_t *)(p + 0x50));
}
