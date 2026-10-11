#include "ffc/types.h"

extern int func_ov000_0215a864(void);
extern uint8_t *data_ov000_02170060;

int func_ov000_0215a578(void)
{
    if (func_ov000_0215a864()) {
        uint8_t *p = data_ov000_02170060;
        *(uint32_t *)(p + 4) = 1;
        *(uint32_t *)(data_ov000_02170060 + 0x30) = 0;
        return 1;
    }
    return 0;
}
