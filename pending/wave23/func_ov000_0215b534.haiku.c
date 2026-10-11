#include "ffc/types.h"

extern uint32_t data_ov000_02170064[];
extern int32_t func_ov000_0215bf78(void);
extern uint32_t func_ov000_0215b4e0(uint32_t *p);
extern int32_t func_ov000_0215b7d4(uint32_t a, uint32_t b);

int32_t func_ov000_0215b534(void)
{
    uint32_t local;
    if (data_ov000_02170064[1] == 0 || func_ov000_0215bf78() == 0) {
        return 0;
    }
    {
        uint32_t r = func_ov000_0215b4e0(&local);
        return func_ov000_0215b7d4(local, r);
    }
}
