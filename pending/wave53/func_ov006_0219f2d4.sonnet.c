#include "ffc/types.h"

extern uint32_t data_ov006_021bafc0[];
extern uint32_t data_ov006_021bafe0[];
extern int func_ov006_0219fbd0(void);
extern void func_02087508(void *, void *, int);
extern void func_02088978(void);
extern void func_0208898c(void);

int func_ov006_0219f2d4(void)
{
    int r4 = 1;
    int r5 = r4 - 2;
    uint32_t cmd;

    if (data_ov006_021bafc0[3] == 0) {
        return r5;
    }
    if (func_ov006_0219fbd0() == 0) {
        return r4 - 2;
    }
    do {
        uint32_t *p = data_ov006_021bafc0;
        func_02087508(data_ov006_021bafe0, &cmd, 1);
        switch (cmd) {
        case 4:
        case 5:
            break;
        case 20:
            {
            uint32_t a = p[2];
            void (*f)(uint32_t);
            r4 = 0;
            f = (void (*)(uint32_t))p[3];
            r5 = r4;
            f(a);
            }
            break;
        case 0: case 1: case 2: case 3:
        case 6: case 7: case 8: case 9: case 10: case 11: case 12:
        case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        default:
            r4 = 0;
            break;
        }
    } while (r4 != 0);

    func_02088978();
    data_ov006_021bafc0[0] = 0;
    data_ov006_021bafc0[3] = 0;
    func_0208898c();
    return r5;
}
