#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov002_021d4cc8[];

void *func_ov002_0219f824(void *p) {
    *(uint8_t **)p = data_ov002_021d4cc8;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
