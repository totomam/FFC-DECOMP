#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(int32_t idx);

uint8_t *func_ov000_02163634(int32_t idx)
{
    int32_t n = *(int32_t *)(func_ov000_02163350(idx) + 0x50);
    if (idx < n) {
        return func_ov000_02163350(n) + 0x54 + idx * 0x28;
    }
    return 0;
}
