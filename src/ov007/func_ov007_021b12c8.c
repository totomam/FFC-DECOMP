#include "ffc/types.h"

extern void func_02075af4(void *a, uint32_t b, uint32_t c);
extern void func_020695d0(void *p);
extern void func_02056844(void *p);
extern uint32_t data_ov007_021c5e94;

void *func_ov007_021b12c8(void *p)
{
    *(uint32_t **)p = &data_ov007_021c5e94;
    func_02075af4(*(void **)((uint8_t *)p + 0xb8), 0, 0);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
