#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, int *d);
extern int func_ov000_021655ac(int h, int *p, int z, int *q);
extern int func_ov000_021655a0(int h);
extern void func_ov001_02171e6c(int *p, int a, int b);
extern int data_ov001_0218ff98;

int func_ov001_02174dd0(int *self)
{
    int x;
    int y;
    int r;

    func_ov000_021652a8(8, 3, 0x10, &data_ov001_0218ff98);
    r = func_ov000_021655ac(self[0x50 / 4], &x, 0, &y);
    if (r == -1 || (r == 1 && y != 0)) {
        self[0x124 / 4] = 1;
        self[0x40 / 4] = 5;
        if (r == -1) {
            self[0x54 / 4] = func_ov000_021655a0(self[0x50 / 4]);
        } else {
            self[0x54 / 4] = 0;
        }
        return;
    }
    if (r == 1 && x != 0) {
        self[0x10 / 4] = 8;
        func_ov001_02171e6c(self, 0, 0);
    }
}
