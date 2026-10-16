#include "ffc/types.h"
extern void func_02084ca4(void *a, void *b, int n);
extern uint8_t data_ov000_02170984[8];
uint8_t *func_ov000_02164c68(void) {
    func_02084ca4((void*)0x2fffe0c, data_ov000_02170984, 4);
    data_ov000_02170984[4] = 0;
    return data_ov000_02170984;
}
