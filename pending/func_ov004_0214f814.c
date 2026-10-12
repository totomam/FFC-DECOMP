#include "ffc/types.h"

extern void func_01ffe0c0(uint32_t x);
extern uint32_t func_01ffe500(uint32_t x);
extern void func_01fff364(void *p);

void func_ov004_0214f814(uint8_t *p) {
    if (p[0x194]) {
        func_01ffe0c0(*(uint32_t *)(p + 0x90));
        if (func_01ffe500(*(uint32_t *)(p + 0x90)) != 0) {
            p[0x194] = 0;
        }
    }
    if (p[0x154]) {
        p[0x154] = 0;
        *(uint32_t *)(p + 0x150) = 0;
        func_01fff364(p);
        return;
    }
    if (*(uint32_t *)(p + 0x150) != 0) {
        (*(uint32_t *)(p + 0x150))--;
        if (*(uint32_t *)(p + 0x150) == 0) {
            func_01fff364(p);
        }
    }
}
