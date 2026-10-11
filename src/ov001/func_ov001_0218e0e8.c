#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern int func_02075a98(void);
extern int func_ov001_0218e32c(uint8_t *p);
extern void func_ov001_0218e15c(uint8_t *p);

void func_ov001_0218e0e8(uint8_t *a)
{
    uint32_t *p1 = (uint32_t *)data_020b8e44;
    uint8_t *p2 = (uint8_t *)*p1;
    if (*(uint32_t *)(p2 + 0x88)) {
        if (func_02075a98() && func_ov001_0218e32c(a)) {
            return;
        }
    }
    if (a[0x9f]) {
        func_ov001_0218e15c(a);
    }
}
