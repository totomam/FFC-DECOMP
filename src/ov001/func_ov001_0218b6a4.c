#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov001_021946b8[];

void *func_ov001_0218b6a4(void *p) {
    *(uint8_t **)p = data_ov001_021946b8;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
