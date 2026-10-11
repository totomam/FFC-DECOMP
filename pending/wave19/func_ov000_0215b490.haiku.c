#include "ffc/types.h"

extern uint32_t data_ov000_02170064[];
extern int32_t func_ov000_0215bf78(void);
extern int32_t func_ov000_02163408(void);

int32_t func_ov000_0215b490(void)
{
    int32_t r = 0;
    if (data_ov000_02170064[1] != 0) {
        r = func_ov000_0215bf78();
    }
    if (r != 0) {
        return func_ov000_02163408();
    }
    return 0;
}
