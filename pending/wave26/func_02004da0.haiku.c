/* cflags: -nothumb */
#include "ffc/types.h"

extern uint8_t data_02fe0000[];

void func_02004da0(void) {
    uint32_t a = (uint32_t)data_02fe0000;
    uint32_t k = 0x800;
    uint32_t *p;
    void (*fn)(void);
    a = a + 0x4000;
    a = a - 0x40;
    a = a - 0x40;
    a = a - k;
    a = a + 4;
    p = (uint32_t *)a;
    while ((fn = (void (*)(void))*p) != 0) {
        fn();
        *p++ = 0;
    }
}
