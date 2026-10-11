#include "ffc/types.h"

extern void func_ov003_02155520(void *a, void *b);

void func_ov003_0215b520(uint8_t *p, void *q) {
    uint8_t *v = *(uint8_t **)(p + 0x114);
    if (v != 0) {
        *(volatile uint32_t *)(v + 0x34);
    } else {
        v = *(uint8_t **)(p + 0x110);
        if (v == 0) return;
        *(volatile uint32_t *)(v + 0x34);
    }
    if (*(void **)(p + 0x364) != 0) {
        func_ov003_02155520(*(void **)(p + 0x364), q);
    }
}
