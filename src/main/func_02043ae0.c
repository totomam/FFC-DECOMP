#include "ffc/types.h"

extern int func_ov003_0216c838(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_0216c878(void *p);

void func_02043ae0(uint8_t *a, void *node, uint16_t *name) {
    if (node == 0) {
        return;
    }
    if (func_ov003_0216c838(name) != 0) {
        if (*name == 0x5f) {
            func_02056bc0(*(void **)(a + 0x150), node);
            *(void **)(a + 0x158) = node;
        } else {
            func_02056bc0(*(void **)(a + 0x14C), node);
        }
        func_02056bc0(a + 0x14, func_ov003_0216c878(node));
    } else {
        func_02056bc0(a + 0x14, node);
    }
}
