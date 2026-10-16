#include "ffc/types.h"
extern void func_ov003_02155520(void *p);
void func_ov003_0215b520(uint8_t *p) {
    uint8_t *a = *(uint8_t **)(p + 0x114);
    if (a != 0) {
        (void)*(volatile uint32_t *)(a + 0x34);
    } else {
        a = *(uint8_t **)(p + 0x110);
        if (a == 0) return;
        (void)*(volatile uint32_t *)(a + 0x34);
    }
    a = *(uint8_t **)(p + 0x364);
    if (a != 0) func_ov003_02155520(a);
}
