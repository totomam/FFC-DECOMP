#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *p);
extern int func_02087460(void);
extern int func_ov000_0215012c(void *p);
extern void *func_ov000_0214fee8(void *p);
extern void *func_ov000_0214fe4c(void);
extern void *func_ov000_0214fec4(void);
extern void func_ov000_0214ffd8(void *a, void *b);
extern void func_ov000_0214ff64(void *b);

void func_ov000_0214fdc8(void *a0, uint16_t a1)
{
    uint8_t *r4;
    uint8_t *r5;

    r4 = func_ov000_0214fa54(a0);
    if (r4 == 0) {
        return;
    }
    if (r4[0x12dc] != 0) {
        return;
    }
    if (func_02087460() != 0) {
        if (r4[0x12df] == 2) {
            if (func_ov000_0215012c(a0) != 0) {
                return;
            }
        }
    }
    if (r4[0x12df] == 1) {
        if (*(uint16_t *)((uint8_t *)a0 + 0x3c) != 0) {
            return;
        }
    }
    r5 = func_ov000_0214fee8((uint8_t *)a0 + 4);
    if (r5 == 0) {
        r5 = func_ov000_0214fe4c();
    }
    if (r5 == 0) {
        if (*(int *)(r4 + 0x12cc) == 1) {
            r5 = func_ov000_0214fec4();
        }
    }
    if (r5 == 0) {
        return;
    }
    func_ov000_0214ffd8(a0, r5 + 0x10);
    *(uint16_t *)(r5 + 2) = a1;
    func_ov000_0214ff64(r5);
}
