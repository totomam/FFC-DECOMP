#include "ffc/types.h"

extern uint32_t func_02035eb0(const void *object);
extern uint32_t func_02035eb8(const void *object);
extern uint32_t func_020363d8(const void *object);
extern uint32_t func_02035ef8(const void *object);
extern void func_02036574(void *object, uint32_t a, uint32_t b);

void func_02036600(void *object) {
    uint8_t *p = (uint8_t *)object;

    if (func_02035eb0(p + 0x24) == 0) {
        func_02036574(p, 0, 0);
        return;
    }
    switch (func_02035eb8(p + 0x24)) {
    case 3:
        if (func_020363d8(p) != 0) {
            func_02036574(p, 1, 1);
        } else {
            func_02036574(p, func_02035ef8(p + 0x24), 1);
        }
        return;
    case 4:
        func_02036574(p, func_02035ef8(p + 0x24), 1);
        return;
    default:
        return;
    }
}
