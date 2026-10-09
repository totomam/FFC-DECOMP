#include "ffc/types.h"

extern void func_02034dfc(void);

void func_02031554(uint8_t *self) {
    void *p = *(void **)(self + 0x98);
    if (p) {
        func_02034dfc();
    }
}
