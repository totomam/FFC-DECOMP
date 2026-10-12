#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(uint8_t *p);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_02150958(void);
extern void func_ov000_0214fb84(int a, uint8_t *b, int c, int d);

void func_ov000_02150f48(uint8_t *p)
{
    uint8_t *r4 = func_ov000_0214fa54(p);

    switch (*(uint16_t *)(p + 2)) {
    case 0:
        if (r4[0x12de] == 12) {
            func_ov000_0214fbe4(10);
            func_ov000_02150958();
            return;
        }
        *(uint16_t *)(r4 + 0x22e8) = 0;
        func_ov000_0214fbe4(3);
        func_ov000_0214fb84(0, r4 + 0x12e0, 0, 0x481);
        return;
    case 1:
    case 3:
        func_ov000_0214fbe4(10);
        func_ov000_02150958();
        return;
    case 2:
    case 4:
    default:
        func_ov000_0214fbe4(11);
        func_ov000_0214fb84(7, r4 + 0x12e0, 0, 0x493);
        return;
    }
}
