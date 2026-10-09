#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov007_021c2d24[];

void *func_ov007_0219e678(void *p) {
    *(uint8_t **)p = data_ov007_021c2d24;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
