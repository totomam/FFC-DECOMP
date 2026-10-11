#include "ffc/types.h"

extern uint32_t data_ov000_02170064[];
extern void *data_ov000_0217008c[];
extern uint8_t *func_ov001_02180840(void *p);

void *func_ov000_0215b6a0(int32_t a)
{
    int32_t i;

    if (data_ov000_02170064[1] == 0) {
        return 0;
    }
    for (i = 0; i < 0x20; i++) {
        if (data_ov000_0217008c[i] != 0) {
            if (a == func_ov001_02180840(data_ov000_0217008c[i])[1]) {
                return data_ov000_0217008c[i];
            }
        }
    }
    return 0;
}
