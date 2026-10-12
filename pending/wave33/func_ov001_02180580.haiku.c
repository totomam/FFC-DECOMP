#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);

void func_ov001_02180580(void *self)
{
    uint8_t *p = (uint8_t *)self;

    if (*(void **)(p + 0x38) != 0) {
        func_ov000_021653f4(*(void **)(p + 0x38));
    }
    if (*(void **)(p + 0x44) != 0) {
        func_ov000_021653f4(*(void **)(p + 0x44));
    }
    if (*(void **)(p + 0x50) != 0) {
        func_ov000_021653f4(*(void **)(p + 0x50));
    }
    if (*(void **)(p + 0x5c) != 0) {
        func_ov000_02168738(*(void **)(p + 0x5c));
    }
    if (*(void **)(p + 0x60) != 0) {
        func_ov000_02168738(*(void **)(p + 0x60));
    }
    if (*(void **)(p + 0x98) != 0) {
        func_ov000_02168738(*(void **)(p + 0x98));
    }
    if (*(void **)(p + 0x9c) != 0) {
        func_ov000_02168738(*(void **)(p + 0x9c));
    }
    func_ov000_021653f4(self);
}
