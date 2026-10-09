#include "ffc/types.h"

extern void func_02075ae4(void);

void func_02076424(uint8_t *self) {
    void *p = *(void **)(self + 0x88);
    if (p) {
        func_02075ae4();
    }
}
