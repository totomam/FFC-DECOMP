#include "ffc/types.h"

extern uint32_t func_02056830();
extern void *func_020903cc();
extern void func_ov014_02147fb0(void *self, int32_t arg);

void func_ov014_02147e30(void *self)
{
    uint32_t *s = (uint32_t *)self;
    uint32_t v;

    s[9] = 0x20;
    s[10] = 0x20;
    v = func_02056830();
    s[6] = v;
    func_020903cc(v, 0, s[9]);
    func_ov014_02147fb0(self, 1);
}
