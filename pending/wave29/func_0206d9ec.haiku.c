#include "ffc/types.h"

extern uint8_t data_020b1f5c[];
extern uint8_t data_020b1f70[];
extern void func_02054738(void *p);
extern void func_02056858(void *p);
extern void func_0209d06c(void *a, uint32_t b, uint32_t c, void *f);
extern void func_02057934(void *p);
extern void func_02056844(void *p);
extern void func_02057658(void);

void *func_0206d9ec(void *param)
{
    uint32_t *p = (uint32_t *)param;
    p[0] = (uint32_t)data_020b1f5c;
    p[5] = (uint32_t)data_020b1f70;
    func_02054738(&p[5]);
    func_02056858((void *)p[11]);
    func_0209d06c((void *)p[8], 0x2c, 8, (void *)func_02057658);
    func_02057934(p);
    func_02056844(p);
    return p;
}
