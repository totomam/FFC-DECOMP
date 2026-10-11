#include "ffc/types.h"

void *func_ov001_0218ddf4(void *p) {
    void *n = *(void **)((uint8_t *)p + 0x80);
    if (n != 0) {
        return func_ov001_0218ddf4(n);
    }
    return p;
}
