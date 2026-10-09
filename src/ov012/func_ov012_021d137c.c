#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov012_021d3da0[];

void *func_ov012_021d137c(void *p) {
    *(uint8_t **)p = data_ov012_021d3da0;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
