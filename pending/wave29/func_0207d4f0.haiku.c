#include "ffc/types.h"

extern uintptr_t func_0207cab4(void);
extern void *func_02087460(void);
extern uint16_t func_02088a2c(void *object);

int func_0207d4f0(void) {
    uint8_t *p = (uint8_t *)func_0207cab4();
    void *o = func_02087460();
    uint32_t f;
    if (o != 0) {
        if (func_02088a2c(o) != 1) {
            f = *(uint32_t *)(p + 0x1b4);
            if ((f << 26) >> 31) {
                if (!((f << 23) >> 31)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
