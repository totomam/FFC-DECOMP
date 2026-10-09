#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov013_021c4034[];

void *func_ov013_021bee28(void *p) {
    *(uint8_t **)p = data_ov013_021c4034;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
