#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_020af96c[];

void *func_02048a68(void *p) {
    *(uint8_t **)p = data_020af96c;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
