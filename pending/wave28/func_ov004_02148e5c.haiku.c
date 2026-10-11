#include "ffc/types.h"

extern void func_020887fc(void *p);
extern void func_0209d02c(void *p, int a, int b, void (*f)(void));
extern void func_02056db0(void *p);
extern void func_0205d620(void);
extern char data_ov004_02158598;

void *func_ov004_02148e5c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint8_t *arr;
    int i;

    *(char **)self = &data_ov004_02158598;
    arr = self + 0x158;
    for (i = 0; i < 3; i++) {
        func_020887fc(arr + i * 0x28);
    }
    func_0209d02c(self + 0xb0, 3, 0x38, func_0205d620);
    func_02056db0(self);
    return self;
}
