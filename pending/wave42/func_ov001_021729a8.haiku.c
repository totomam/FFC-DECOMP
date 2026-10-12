#include "ffc/types.h"

extern void *data_ov001_02194bf8;
extern uint8_t data_ov001_0218f4ec[];
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f558[];
extern uint8_t data_ov001_0218f48d[];
extern uint8_t data_ov001_0218f5ac[];
extern int func_02092948(void *a, void *b);
extern int func_ov000_021652a8();
extern void *func_ov001_0217281c(void *a);
extern int func_ov001_0217299c();
extern int func_ov000_0216888c(void *a, void *b, void *c, int d, int e);
extern void func_ov000_021653f4(void *a);
extern void *func_ov000_0216876c(void *a, int b);

int func_ov001_021729a8(void *a)
{
    void *local[4];
    int r;

    if (a == 0 || data_ov001_02194bf8 == 0 || func_02092948(a, data_ov001_0218f4ec) == 0) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f558, data_ov001_0218f544, data_ov001_0218f48d, 0x312, a, data_ov001_02194bf8);
        return 0;
    }
    local[0] = func_ov001_0217281c(a);
    r = func_ov000_0216888c(data_ov001_02194bf8, local, func_ov001_0217299c, 0, 1);
    func_ov000_021653f4(local[0]);
    if (r == -1) {
        func_ov000_021652a8(8, 4, 1, data_ov001_0218f5ac, data_ov001_0218f544, data_ov001_0218f48d, 0x323, a);
        return 0;
    }
    return *(int *)((char *)func_ov000_0216876c(data_ov001_02194bf8, r) + 4);
}
