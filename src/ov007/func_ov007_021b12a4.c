#include "ffc/types.h"

extern uint32_t data_ov007_021c5e94;
extern void func_02075af4(void *a, int b, int c);
extern void func_020695d0(void *p);

void *func_ov007_021b12a4(void *p)
{
    uint32_t **self = (uint32_t **)p;
    *self = &data_ov007_021c5e94;
    func_02075af4(*(void **)((uint8_t *)p + 0xb8), 0, 0);
    func_020695d0(p);
    return p;
}
