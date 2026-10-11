#include "ffc/types.h"

extern void func_ov000_0216552c(void *a, void *b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern uint32_t func_ov000_0216591c(void);
extern uint8_t data_ov000_02170a14[];
extern uint32_t data_ov000_02170a10[];
extern uint8_t data_ov000_02170a1c[];

void func_ov000_02164cd4(void)
{
    uint32_t *p = data_ov000_02170a10;
    func_ov000_0216552c((void *)p[0], data_ov000_02170a1c, p[19], 0, data_ov000_02170a14, 8);
    p[20] = func_ov000_0216591c();
}
