#include "ffc/types.h"

extern void func_ov001_0218ddf4(void *p);

void func_ov001_0218ddf4(void *p) {
    void *next = *(void **)((uint8_t *)p + 0x80);
    if (next != 0) {
        func_ov001_0218ddf4(next);
    }
}
