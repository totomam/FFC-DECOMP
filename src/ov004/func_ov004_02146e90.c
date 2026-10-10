#include "ffc/types.h"

extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *object);

void *func_ov004_02146e90(void *param)
{
    uint8_t *p = (uint8_t *)param + 0x94;

    if (*(uint32_t *)(p + 4) != 0) {
        if (p[0xc] != 0) {
            func_02052d3c(*(uint32_t *)(p + 4), *(uint32_t *)(p + 8));
        }
        func_02052c04(*(uint32_t *)(p + 4));
    }
    func_02053290(p);
    func_02056db0(param);
    return param;
}
