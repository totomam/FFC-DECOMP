#include "ffc/types.h"

extern uint8_t data_ov000_0216aff4[];
extern uint8_t *func_ov000_02163350(void);
extern int func_02086b04(uint32_t a, uint32_t b, uint8_t *c, uint32_t d);

int func_ov000_0215d974(uint32_t a, uint32_t b) {
    uint8_t *p = func_ov000_02163350();
    return func_02086b04(a, b, data_ov000_0216aff4, *(uint32_t *)(p + 0x678));
}
