#include "ffc/types.h"

extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_0200d5ec(void *a);
extern void func_ov010_021bd4e0(void *a);

void *func_ov010_021bfea0(void *param0)
{
    uint8_t *sub = (uint8_t *)param0 + 0x51 * 4;

    if (*(void **)(sub + 4) != 0) {
        if (sub[0xc] != 0) {
            func_02052d3c(*(void **)(sub + 4), *(uint32_t *)(sub + 8));
        }
        func_02052c04(*(void **)(sub + 4));
    }

    func_02053290(sub);
    func_0200d5ec((uint8_t *)param0 + 0x4e * 4);
    func_ov010_021bd4e0(param0);
    return param0;
}
