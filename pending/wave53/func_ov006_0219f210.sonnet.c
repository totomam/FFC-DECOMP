#include "ffc/types.h"

extern int func_02087498(void *a, void *b, int c);
extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_ov006_0219fcac(void *f, uint32_t a, uint32_t b);
extern int func_02087508(void *a, uint32_t *b, int c);
extern int func_ov006_0219f1e8(void);
extern uint32_t data_ov006_021bafe0[];
extern uint32_t data_ov006_021bafd0[];
typedef struct { uint32_t (*f)(uint32_t); uint32_t x; uint32_t r; void (*g)(uint32_t); } S;
extern S data_ov006_021bafc0;

int func_ov006_0219f210(uint32_t a, uint32_t b)
{
    uint32_t cmd;
    uint32_t res;
    int r4 = 1;

    func_02087498(data_ov006_021bafe0, data_ov006_021bafd0, 4);
    if (a == 0 || b == 0) {
        return -1;
    }
    func_02088978();
    data_ov006_021bafc0.f = (void*)a;
    data_ov006_021bafc0.g = (void*)b;
    func_0208898c();
    res = data_ov006_021bafc0.f(0x5890);
    data_ov006_021bafc0.r = res;
    if (res == 0) {
        return r4 - 2;
    }
    if (func_ov006_0219fcac((void *)func_ov006_0219f1e8, res, 0x5890) == 0) {
        r4 = 0;
    }
    while (r4) {
        func_02087508(data_ov006_021bafe0, &cmd, 1);
        switch (cmd) {
        case 4:
        case 5:
            break;
        case 6:
            return 0;
        case 0: case 1: case 2: case 3:
        case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        default:
            r4 = 0;
            break;
        }
    }
    data_ov006_021bafc0.g(data_ov006_021bafc0.r);
    return -1;
}
