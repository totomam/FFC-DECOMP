#include "ffc/types.h"

extern uint8_t *data_ov000_02170000;
extern int func_02086fe4(void *p);
extern int func_ov000_02152818(void);
extern int func_ov000_02157ff4(void);
extern void func_ov000_02159014(int a, int b);
extern void func_ov000_021569f0(void *p);
extern void func_ov000_021591a8(int a, void *b, int c);

int func_ov000_02157f38(void)
{
    int r5;
    uint8_t *p;
    uint32_t r1;

    p = data_ov000_02170000;
    if (p == 0 || *(int *)(p + 0x1be0) == 0) {
        return 0;
    }
    if (func_02086fe4(p + 0x1b74) == 1) {
        r1 = (uint32_t)func_ov000_02152818();
        if (r1 == 0xff || r1 > 0x63) {
            r1 = 0x63;
        }
        switch (*(uint32_t *)(data_ov000_02170000 + 0x1020)) {
        case 8:
            if (func_ov000_02157ff4() == 0) {
                r5 = 3;
            } else {
                r5 = 2;
            }
            break;
        case 2:
            func_ov000_02159014(8, 0xffff347c - r1);
            r5 = 3;
            break;
        case 3:
        case 4:
        case 6:
            func_ov000_02159014(0x12, 0xffff7f0e);
            r5 = 3;
            break;
        default:
            func_ov000_02159014(0x12, 0xffff7efa);
            r5 = 3;
            break;
        }
    } else {
        return 1;
    }
    func_ov000_021569f0(data_ov000_02170000);
    func_ov000_021591a8(0, data_ov000_02170000, 0);
    data_ov000_02170000 = 0;
    return r5;
}
