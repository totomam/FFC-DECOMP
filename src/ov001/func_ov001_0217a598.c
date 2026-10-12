#include "ffc/types.h"

extern void func_ov001_02178324(void *a, int b, void *c);
extern void func_ov001_02178340(void *a, int b, int c);
extern uint8_t data_ov001_02190cd0;
extern uint8_t data_ov001_02190ce8;
extern uint8_t data_ov001_02190cf4;
extern uint8_t data_ov001_02190cfc;

int func_ov001_0217a598(void *p, int b) {
    char *s = *(char **)p;
    if (*(int *)(s + 0x5ec) > 0) {
        func_ov001_02178324(p, b, &data_ov001_02190cd0);
        func_ov001_02178340(p, b, *(int *)(s + 0x198));
        func_ov001_02178324(p, b, (void *)*(int *)(s + 0x5e4));
        func_ov001_02178324(p, b, &data_ov001_02190ce8);
        func_ov001_02178340(p, b, *(int *)(s + 0x1a4));
        func_ov001_02178324(p, b, &data_ov001_02190cf4);
        *(int *)(s + 0x5ec) = 0;
    }
    if (*(int *)(s + 0x5fc) > 0) {
        func_ov001_02178324(p, b, &data_ov001_02190cfc);
        func_ov001_02178340(p, b, *(int *)(s + 0x198));
        func_ov001_02178324(p, b, (void *)*(int *)(s + 0x5f4));
        func_ov001_02178324(p, b, &data_ov001_02190cf4);
        *(int *)(s + 0x5fc) = 0;
    }
    return 0;
}
