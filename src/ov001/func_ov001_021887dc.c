#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_ov001_02188d14(int, int);
extern int func_ov001_021893f4(void *);
extern uint8_t data_ov001_02195780[];
extern uint8_t data_ov001_02195764[];

int func_ov001_021887dc(void *p) {
    int *st;
    if (func_ov000_02159000() != 0) {
        return 0;
    }
    func_0208763c(data_ov001_02195780);
    st = (int *)data_ov001_02195764;
    if (st[5] != 1) {
        func_ov001_02188d14(2, 0);
        func_02087678(data_ov001_02195780);
        return 0;
    }
    st[5] = 2;
    func_02087678(data_ov001_02195780);
    if (func_ov001_021893f4(p) != 0) {
        return 1;
    }
    func_0208763c(data_ov001_02195780);
    st[5] = 1;
    func_02087678(data_ov001_02195780);
    return 0;
}
