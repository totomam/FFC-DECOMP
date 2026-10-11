#include "ffc/types.h"

extern uint8_t *func_ov000_02166414(void);
extern int func_ov000_021652a8(int a, int b, int c, void *d);
extern uint8_t data_ov000_0216b7fc[];

uint16_t func_ov000_02166ee4(void) {
    uint8_t *p = func_ov000_02166414();
    if (*(uint32_t *)(p + 0xc) == 0) {
        func_ov000_021652a8(12, 0, 1, data_ov000_0216b7fc);
        return 0;
    }
    return *(uint16_t *)(p + 0x38);
}
