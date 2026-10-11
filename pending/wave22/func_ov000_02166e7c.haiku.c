#include "ffc/types.h"

extern uint32_t *func_ov000_02166414(void);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern void func_ov001_02180600(uint32_t a);
extern uint8_t data_ov000_0216b7fc[];

int func_ov000_02166e7c(void)
{
    uint32_t *p = func_ov000_02166414();
    if (p[3] == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 3;
    }
    func_ov001_02180600(p[0]);
    return 0;
}
