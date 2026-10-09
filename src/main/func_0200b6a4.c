#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_020aaf80[];

void *func_0200b6a4(void *p) {
    *(uint8_t **)p = data_020aaf80;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
