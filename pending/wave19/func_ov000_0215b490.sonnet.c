#include "ffc/types.h"

extern uint32_t data_ov000_02170064[];
extern int32_t func_ov000_0215bf78(void);
extern int32_t func_ov000_02163408(void);

int32_t func_ov000_0215b490(void)
{
    if (data_ov000_02170064[1] == 0 || func_ov000_0215bf78() == 0) {
        return 0;
    }
    return func_ov000_02163408();
}
