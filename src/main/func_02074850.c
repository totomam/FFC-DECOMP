#include "ffc/types.h"

extern void func_020059cc(void *p);

void *func_02074850(void *p) {
    func_020059cc((uint8_t *)p + 0x34);
    func_020059cc((uint8_t *)p + 0x28);
    return p;
}
