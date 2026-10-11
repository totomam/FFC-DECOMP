#include "ffc/types.h"

extern uint32_t *func_ov001_02172654(void);
extern void func_ov001_0217249c(void);

void func_ov001_02173488(void) {
    uint32_t *p = func_ov001_02172654();
    if (p != 0) {
        p[0x10] = 0x12;
        p[4] = 0xb;
        p[0x49] = 1;
        func_ov001_0217249c();
    }
}
