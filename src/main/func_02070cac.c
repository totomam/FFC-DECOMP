#include "ffc/types.h"

extern void func_02070a54(void *p);
extern uint8_t data_020b2184;

void *func_02070cac(void **p) {
    func_02070a54(p);
    *p = &data_020b2184;
    return p;
}
