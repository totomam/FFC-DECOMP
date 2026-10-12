#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern int func_ov000_0214fa60(int a, int b);
extern int func_0208d570(void);
extern int func_ov000_02150598(void);
extern int func_02087460(void);
extern int func_021dad44(void);

extern uint32_t data_ov000_0216e214[];

int func_ov000_0214f4f0(int a, int b) {
    uint32_t h = func_02088978();
    uint32_t *d = data_ov000_0216e214;
    uint8_t *base = (uint8_t *)d[1];
    int r;

    if (base == 0) {
        func_0208898c(h);
        return 1;
    }
    switch (base[0x12de]) {
    case 1:
        func_ov000_0214fa60(a, b);
        break;
    case 2:
        func_0208898c(h);
        return 2;
    case 3:
        func_0208898c(h);
        return 0;
    default:
        func_0208898c(h);
        return 1;
    }
    if (func_0208d570() == 0) {
        return 5;
    }
    base = (uint8_t *)d[1];
    switch (base[0x12df]) {
    case 1:
        r = func_ov000_02150598();
        break;
    case 2:
        if (func_02087460() != 0) {
            r = func_021dad44();
            break;
        }
        /* fallthrough */
    default:
        r = 7;
        break;
    }
    func_0208898c(h);
    return r;
}
