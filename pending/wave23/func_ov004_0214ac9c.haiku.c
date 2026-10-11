#include "ffc/types.h"

extern void func_02056858(void *p);

void func_ov004_0214ac9c(uint8_t *self) {
    if (*(void **)(self + 0xac)) {
        func_02056858(*(void **)(self + 0xac));
        *(void **)(self + 0xac) = 0;
    }
    if (*(void **)(self + 0xa8)) {
        func_02056858(*(void **)(self + 0xa8));
        *(void **)(self + 0xa8) = 0;
    }
}
