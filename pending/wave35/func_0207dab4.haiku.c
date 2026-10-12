#include "ffc/types.h"

typedef struct {
    uint32_t count;
    uint32_t flag;
    int (*cb)(void);
} DabState;

extern void func_0207ccbc(uint32_t a, uint32_t b);
extern void func_0207db20(void);
extern void func_02088f30(void);
extern DabState data_021410c0;

void func_0207dab4(uint32_t unused, uint32_t code) {
    int r4;
    if ((code & 0x3f) == 0x11) {
        if (data_021410c0.flag != 0) {
            return;
        }
        r4 = 1;
        data_021410c0.flag = 1;
        func_0207ccbc(1, 0);
        if (data_021410c0.cb != 0) {
            r4 = data_021410c0.cb();
        }
        if (r4 != 0) {
            func_0207db20();
        }
    } else if ((code & 0x3f) == 2) {
        data_021410c0.count++;
        data_021410c0.flag = 0;
        func_0207ccbc(2, 0);
    } else {
        func_02088f30();
    }
}
