#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *a, void *p);
extern int func_ov001_02177c4c(void *a, int b, int c, int d, int e, int f);
extern uint8_t data_ov001_02190100[];
extern uint8_t data_ov001_021901f4[];

int func_ov001_02176104(uint32_t *a, int b, int c)
{
    uint32_t *o;

    if (a == 0 || (o = (uint32_t *)a[0]) == 0) {
        return 2;
    }
    if (o[0x42] != 0) {
        return 0;
    }
    if (o[0x7d] == 4) {
        func_ov001_0217ef6c(a, data_ov001_02190100);
        return 2;
    }
    if (c == 0) {
        func_ov001_0217ef6c(a, data_ov001_021901f4);
        return 2;
    }
    return func_ov001_02177c4c(a, b, 1, c, 0, 0);
}
