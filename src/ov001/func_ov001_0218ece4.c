#include "ffc/types.h"

extern int func_02087460(void);
extern uint32_t func_020159c8(int a, int b);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern int data_020b8e44;

uint8_t *func_ov001_0218ece4(uint8_t *obj, int idx, uint32_t arg)
{
    int v = idx;
    uint32_t r;

    if (v <= 0 || v > 15) {
        v = 14;
    }
    if (func_02087460() != 0) {
        r = func_020159c8(data_020b8e44, v + 0x12d);
    } else {
        r = func_020159c8(data_020b8e44, v + 0x11e);
    }
    func_02091b10(obj + 4, r, arg);
    return obj + 4;
}
