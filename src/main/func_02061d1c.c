#include "ffc/types.h"

extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_020618a8(void *object);

void *func_02061d1c(void *param)
{
    uint8_t *p = (uint8_t *)param + 0x34;

    if (*(uint32_t *)(p + 4) != 0) {
        if (p[0xc] != 0) {
            func_02052d3c(*(uint32_t *)(p + 4), *(uint32_t *)(p + 8));
        }
        func_02052c04(*(uint32_t *)(p + 4));
    }
    func_02053290(p);
    func_020618a8(param);
    return param;
}
