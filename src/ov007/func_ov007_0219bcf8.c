#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov007_021c28c4[];

void *func_ov007_0219bcf8(void *p) {
    *(uint8_t **)p = data_ov007_021c28c4;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
