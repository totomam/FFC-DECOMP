#include "ffc/types.h"

extern int func_ov000_02148c18(void);
extern uint8_t data_ov000_0216de20;

int func_ov000_02148c9c(void)
{
    if (func_ov000_02148c18() != 0) {
        return 0;
    }
    if (data_ov000_0216de20 == 0xff) {
        return 0x10;
    }
    return data_ov000_0216de20;
}
