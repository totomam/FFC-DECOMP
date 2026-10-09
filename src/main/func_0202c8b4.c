#include "ffc/types.h"

extern void func_0202ad8c(void *p);
extern uint8_t data_020ad9a0;

void *func_0202c8b4(void **p) {
    func_0202ad8c(p);
    *p = &data_020ad9a0;
    return p;
}
