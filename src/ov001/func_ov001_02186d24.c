#include "ffc/types.h"

extern uint32_t *func_ov000_0216876c(void *p);

uint32_t func_ov001_02186d24(uint32_t *p) {
    return *func_ov000_0216876c((void *)p[1]);
}
