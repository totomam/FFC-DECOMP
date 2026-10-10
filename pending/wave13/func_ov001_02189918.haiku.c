#include "ffc/types.h"

extern void func_02087620(void *object);
extern uint8_t data_ov001_0219581c[];
extern uint8_t data_ov001_02195798[];

int func_ov001_02189918(void) {
    func_02087620(data_ov001_0219581c);
    *(uint32_t *)(data_ov001_02195798 + 0x20) = 0;
    return 1;
}
