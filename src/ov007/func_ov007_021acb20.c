#include "ffc/types.h"

extern void func_ov007_021acbc8(void *p);
extern void func_ov007_021ab758(void *a, uint8_t b);
extern void func_ov007_021acc04(void *p);
extern int func_020697ac(void *p, uint32_t v);

int func_ov007_021acb20(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    uint32_t v;

    if (*(volatile uint8_t *)(p + 0xfc) == 0) {
        v = p[0xfd];
    } else {
        v = p[0xfc] - 1;
    }
    p[0xfc] = (uint8_t)v;
    func_ov007_021acbc8(p);
    func_ov007_021ab758(*(void **)(p + 0xe0), (uint8_t)(p[0xfc] + 1));
    func_ov007_021acc04(p);
    func_020697ac(p, *(uint32_t *)(p + 0xc0));
    return 1;
}
