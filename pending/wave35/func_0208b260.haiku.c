#include "ffc/types.h"

typedef struct {
    uint16_t flag;
    uint8_t pad0[0xa];
    uint32_t w0c;
    uint32_t w10;
    uint8_t pad1[0x1c];
    uint32_t w30;
    uint32_t w34;
} G;

extern G data_02143540;
extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void WaitByLoop(uint32_t n);
extern void func_020891a8(int a, void *f);
extern void func_0208b2c4(void);

void func_0208b260(void) {
    if (data_02143540.flag != 0) {
        return;
    }
    data_02143540.flag = 1;
    data_02143540.w30 = 0;
    data_02143540.w34 = 0;
    *(uint32_t *)0x2fff684 = 0;
    func_020890f8();
    if (func_020891f4(8, 1) == 0) {
        do {
            WaitByLoop(100);
        } while (func_020891f4(8, 1) == 0);
    }
    func_020891a8(8, (void *)func_0208b2c4);
    {
        uint32_t v = *(uint32_t *)0x2fffc3c;
        data_02143540.w10 = v;
        data_02143540.w0c = v;
    }
}
