#include "ffc/types.h"

extern void func_ov001_021807dc(void);
extern void func_02168b85(void *p, void (*cb)(void), uint32_t flag);

void func_ov001_021807e8(uint32_t *p)
{
    func_02168b85((void *)p[3], func_ov001_021807dc, 0);
}
