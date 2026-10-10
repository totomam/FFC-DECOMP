#include "ffc/types.h"

extern void func_ov006_021b0f08(void);
extern int func_0208da6c(void (*fn)(void), void *p);
extern uint8_t *data_ov006_021bc7f4;

int func_ov006_021b0e40(void) {
    uint8_t *p = data_ov006_021bc7f4;
    if (func_0208da6c(func_ov006_021b0f08, p + 0x1374) == 2) {
        return 1;
    }
    return 0;
}
