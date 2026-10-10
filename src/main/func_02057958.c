#include "ffc/types.h"

extern void func_02057720(void);

void func_02057958(void *self) {
    uint8_t *p = (uint8_t *)self;
    if (p[0x1d] == 0) {
        p[0x1d] = 1;
        func_02057720();
    }
}
