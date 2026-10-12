#include "ffc/types.h"

extern void func_ov000_02159170(int a, int b);
extern void func_0208823c(void);
extern void func_020883b4(void);
extern void func_02089334(void);
extern int func_ov000_0215917c(int a, int b);
extern int func_ov000_021588d0(int a);
extern int func_ov000_02158d34(void);
extern void func_ov000_02158b74(int a);
extern void func_ov000_021591a8(int a, int b, int c);
extern void func_ov000_02155e64(int a);
extern void func_ov000_021653c0(void (*a)(void), void (*b)(void), void (*c)(void), void (*d)(void));
extern void func_02092878(void *a, int b);
extern void func_ov000_02159144(int a);
extern int data_ov000_02170024;
extern void func_ov000_0215922c(void);
extern void func_ov000_02159220(void);
extern void func_ov000_02159240(void);
extern void func_ov000_02159250(void);
extern uint8_t data_ov000_0216af3c[];
extern uint8_t data_ov000_0216af50[];

int func_ov000_0215904c(int a, int b, int c, int d, int e)
{
    int r4;
    int r5;
    int s;
    int h;

    r5 = 0;
    func_ov000_02159170(d, e);
    func_0208823c();
    func_020883b4();
    func_02089334();

    h = func_ov000_0215917c(2, 0x1000);
    if (h == 0) {
        return 4;
    }
    s = func_ov000_021588d0(h);
    if (func_ov000_02158d34() != 0) {
        func_ov000_02158b74(h);
        r5 = 1;
    }
    func_ov000_021591a8(2, h, 0);

    r4 = 2;
    if (s < 0) {
        if (r5 == 0) {
            r4 = 3;
        }
    } else {
        r4 = 1;
        if (r5 == 0) {
            r4 = 0;
        }
    }

    func_ov000_02155e64(a);
    data_ov000_02170024 = c;
    func_ov000_021653c0(func_ov000_02159220, func_ov000_02159240,
                        func_ov000_0215922c, func_ov000_02159250);

    if (b != 0) {
        func_02092878((void *)0x02194c74, b);
    }

    if (a == 0) {
        uint8_t *dst = (uint8_t *)0x0219192c;
        const uint8_t *src = data_ov000_0216af3c;
        int n;
        for (n = 0x13; n != 0; n--) {
            *dst++ = *src++;
        }
    } else {
        uint8_t *dst = (uint8_t *)0x0219192c;
        const uint8_t *src = data_ov000_0216af50;
        int n;
        for (n = 0x1e; n != 0; n--) {
            *dst++ = *src++;
        }
    }

    func_ov000_02159144(1);
    return r4;
}
