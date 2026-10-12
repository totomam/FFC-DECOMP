#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_0207df24(void *p, int v);
extern void func_0207e040(void);

int func_0207e6e4(uint8_t *p) {
    int r1;
    int r4;
    func_02088978();
    if (*(int *)(p + 0x14) & 8) {
        r1 = 1;
    } else {
        r1 = 0;
    }
    r4 = 1;
    if (r1 != 0) {
        r4 = 0;
    }
    if (r4 == 0) {
        *(int *)(p + 0x14) &= ~8;
    }
    func_0208898c();
    if (func_0207df24(p, 1) != 0) {
        func_0207e040();
    }
    return r4;
}
