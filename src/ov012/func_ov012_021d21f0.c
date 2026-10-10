#include "ffc/types.h"

extern void *func_ov012_021d2e44(void *p, int b);

void *func_ov012_021d21f0(uint8_t *p, int b) {
    return func_ov012_021d2e44(*(void **)(p + 0x104), b);
}
