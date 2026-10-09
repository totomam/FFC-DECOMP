#include "ffc/types.h"

extern void func_02088548(void);

void func_02086fac(uint8_t *self) {
    void *p = *(void **)(self + 0xb0);
    if (p) {
        func_02088548();
    }
}
