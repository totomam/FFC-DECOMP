#include "ffc/types.h"

extern void func_02056858(void);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern uint8_t data_ov004_021591e0[];

void *func_ov004_0214bf30(void *p)
{
    uint8_t *s = (uint8_t *)p;
    *(void **)s = data_ov004_021591e0;
    if (*(void **)(s + 0xe0) != 0) {
        func_02056858();
        *(void **)(s + 0xe0) = 0;
    }
    func_0200d5ec(s + 0xd0);
    func_0200d5ec(s + 0xc4);
    func_020695d0(s);
    return s;
}
