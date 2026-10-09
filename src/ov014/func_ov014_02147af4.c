#include "ffc/types.h"

extern void func_ov014_02148584(void);

void func_ov014_02147af4(uint8_t *self) {
    void *p = *(void **)(self + 0x90);
    if (p) {
        func_ov014_02148584();
    }
}
