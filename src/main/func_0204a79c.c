#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_020b0038[];

void *func_0204a79c(void *p) {
    *(uint8_t **)p = data_020b0038;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
