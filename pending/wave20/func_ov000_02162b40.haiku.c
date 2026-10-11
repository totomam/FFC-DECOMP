#include "ffc/types.h"

extern uint32_t *func_ov000_02163634(uint32_t arg);
extern uint8_t *func_ov000_02163350(void);

int func_ov000_02162b40(void)
{
    int result = 0;
    uint32_t *p = func_ov000_02163634(0);
    if (p != 0) {
        uint8_t *q = func_ov000_02163350();
        if (*p == *(uint32_t *)(q + 0x678)) {
            result = 1;
        }
    }
    return result;
}
