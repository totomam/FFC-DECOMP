#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov000_0214fbe4(int);
extern int func_ov000_02150800(void);
extern int func_02087460(void);
extern int func_021dafcc(void);
extern uint32_t data_ov000_0216e214[];

uint32_t func_ov000_0214f898(void) {
    uint32_t h = func_02088978();
    uint8_t *p = (uint8_t *)data_ov000_0216e214[1];
    int r = 0;
    if (p == 0) {
        func_0208898c(h);
        return 1;
    }
    switch (p[0x12de]) {
    case 13:
        func_0208898c(h);
        return 2;
    case 1:
        func_0208898c(h);
        return 0;
    case 6:
        func_ov000_0214fbe4(13);
        p = (uint8_t *)data_ov000_0216e214[1];
        *(uint16_t *)(p + 0x12da) = 9;
        func_0208898c(h);
        return 3;
    default:
        func_0208898c(h);
        return 1;
    case 3:
    case 9:
    case 12:
        if (p[0x12dd] == 1) {
            func_ov000_0214fbe4(13);
            p = (uint8_t *)data_ov000_0216e214[1];
            *(uint16_t *)(p + 0x12da) = 9;
        } else {
            switch (p[0x12df]) {
            case 1:
                r = func_ov000_02150800();
                break;
            case 2:
                if (func_02087460()) {
                    r = func_021dafcc();
                    break;
                }
            default:
                r = 7;
                break;
            }
        }
        func_0208898c(h);
        return r;
    }
}
