#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov009_021affe4[];

void *func_ov009_0219e31c(void *p) {
    *(uint8_t **)p = data_ov009_021affe4;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
