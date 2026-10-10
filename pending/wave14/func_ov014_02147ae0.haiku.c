#include "ffc/types.h"

extern void func_ov014_02148598(void *a, uint32_t b);

void func_ov014_02147ae0(uint8_t *p) {
    void *v = *(void **)(p + 0x90);
    if (v) {
        func_ov014_02148598(v, *(uint32_t *)(p + 0x70));
    }
}
