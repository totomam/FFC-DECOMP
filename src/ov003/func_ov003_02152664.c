#include "ffc/types.h"

extern void func_ov003_02151658(void);

void func_ov003_02152664(uint8_t *self) {
    void *p = *(void **)(self + 0x88);
    if (p) {
        func_ov003_02151658();
    }
}
