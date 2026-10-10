#include "ffc/types.h"

extern uint32_t func_0208a1d8(void);
extern uint32_t func_0208a1fc(void);

uint32_t func_0208a220(void) {
    uint32_t a = func_0208a1d8();
    uint32_t b = func_0208a1fc();
    return (0x100 - a) - b;
}
