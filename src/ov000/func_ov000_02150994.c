#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *p);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_02150958(void);

void func_ov000_02150994(void *a)
{
    uint8_t *b = func_ov000_0214fa54(a);
    uint16_t *h = (uint16_t *)a;

    if (h[1] != 8) return;
    if (h[2] != 0x16) return;
    if (h[3] != 0x25) return;

    switch (b[0x12de] - 8) {
    case 0:
        func_ov000_0214fbe4(12);
        return;
    case 1:
    case 4:
        func_ov000_02150958();
        return;
    case 2:
        func_ov000_0214fbe4(12);
        break;
    }
}
