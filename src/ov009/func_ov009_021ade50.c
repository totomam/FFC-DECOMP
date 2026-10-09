#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov009_021b096c[];

void *func_ov009_021ade50(void *p) {
    *(uint8_t **)p = data_ov009_021b096c;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
