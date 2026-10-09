#include "ffc/types.h"

extern void func_ov004_0214ac9c(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov004_02158dcc[];

void *func_ov004_0214ac18(void *p) {
    *(uint8_t **)p = data_ov004_02158dcc;
    func_ov004_0214ac9c(p);
    func_02056db0(p);
    return p;
}
