#include "ffc/types.h"

extern int func_ov001_0217ec8c(void *a, void *c, int one, int d);
extern int func_02092a04(void *c, void *tbl, uint32_t n);
extern void func_ov001_0217ef50(void *a, int one, void *tbl);
extern void func_ov001_021788f0(void *a, int three, int one);
extern uint32_t *func_ov000_021653d4(uint32_t n);
extern void func_ov001_0217ef6c(void *a, void *tbl);
extern int func_ov001_0217894c(void *a, uint32_t v1, uint32_t v2, uint32_t *p, uint32_t *b, uint32_t zero);
extern void func_ov001_0217b7f4(void *a, uint32_t *b);
extern uint8_t data_ov001_021917a4[];
extern uint8_t data_ov001_021917ac[];
extern uint8_t data_ov001_021917dc[];

int func_ov001_0217eb40(void *a, uint32_t *b, void *c, int d)
{
    uint32_t tmp[2];
    uint32_t *q;
    uint32_t *p;
    int r;
    int one = 1;

    if (func_ov001_0217ec8c(a, c, one, d)) {
        return 4;
    }
    if (func_02092a04(c, data_ov001_021917a4, 4)) {
        func_ov001_0217ef50(a, one, data_ov001_021917ac);
        func_ov001_021788f0(a, 3, one);
        return 3;
    }
    tmp[0] = b[3];
    tmp[1] = b[4];
    if (tmp[0] != 0) {
        p = func_ov000_021653d4(4);
        if (p == 0) {
            func_ov001_0217ef6c(a, data_ov001_021917dc);
            return one;
        }
        *p = 0;
        q = tmp;
        r = func_ov001_0217894c(a, *q++, *q, p, b, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov001_0217b7f4(a, b);
    return 0;
}
