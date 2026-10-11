#include "ffc/types.h"

extern uint32_t func_02087460(void);
extern uint32_t func_0208d304(void);
extern uint32_t func_0208cef8(void);

uint32_t func_0208d570(void) {
    if (func_02087460()) {
        if (!func_0208d304()) {
            return 0;
        }
    }
    if (func_0208cef8()) {
        return 0x8000;
    }
    return *(uint16_t *)0x2fffcfa;
}
