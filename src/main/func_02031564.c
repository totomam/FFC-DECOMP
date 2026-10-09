#include "ffc/types.h"

extern void func_02034e28(void);

void func_02031564(uint8_t *self) {
    void *p = *(void **)(self + 0x98);
    if (p) {
        func_02034e28();
    }
}
