#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_020b1a88[];

void *func_0206a668(void *p) {
    *(uint8_t **)p = data_020b1a88;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
