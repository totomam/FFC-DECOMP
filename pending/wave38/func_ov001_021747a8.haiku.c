#include "ffc/types.h"

extern int32_t func_ov000_021658b4(int32_t);
extern void func_ov000_021652a8(int, int, int, void *);
extern void func_ov001_02171e6c(void *, int, int);
extern uint8_t data_ov001_0218fe8c[];
extern uint8_t data_ov001_0218fea8[];

void func_ov001_021747a8(uint32_t *p) {
    int32_t r;

    r = func_ov000_021658b4(p[115]);
    p[7] = r;
    if (r == -1) {
        func_ov000_021652a8(8, 3, 1, data_ov001_0218fe8c);
        p[115] = 0;
        p[73] = 1;
        p[16] = 4;
        return;
    }
    if (r == 0) {
        p[4] = 2;
        func_ov001_02171e6c(p, 0, 0);
        return;
    }
    p[115] = 0;
    func_ov000_021652a8(8, 3, 16, data_ov001_0218fea8);
    p[4] = 3;
    func_ov001_02171e6c(p, 0, 0);
}
