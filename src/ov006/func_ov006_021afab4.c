#include "ffc/types.h"

extern void func_ov006_021afb78(void);
extern int func_0208da6c(void (*fn)(void), void *p);
extern uint8_t *data_ov006_021bc7e0;

int func_ov006_021afab4(void) {
    uint8_t *p = data_ov006_021bc7e0;
    if (func_0208da6c(func_ov006_021afb78, p + 0x1648) == 2) {
        return 1;
    }
    return 0;
}
