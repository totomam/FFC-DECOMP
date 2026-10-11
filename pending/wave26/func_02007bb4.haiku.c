#include "ffc/types.h"

extern int32_t func_02005fd0(void *p);

void func_02007bb4(uint8_t *p) {
    int32_t i = 0;
    int32_t n = func_02005fd0(p + 0x48);
    if (n > 0) {
        p += 0x48;
        do {
            i++;
        } while (i < func_02005fd0(p));
    }
}
