#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov004_021598cc[];

void *func_ov004_021566c4(void *p) {
    *(uint8_t **)p = data_ov004_021598cc;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
