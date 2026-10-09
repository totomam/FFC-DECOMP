#include "ffc/types.h"

extern void func_0205203c(void *p);
extern uint8_t data_020ae404;

void *func_020354f8(void **p) {
    func_0205203c(p);
    *p = &data_020ae404;
    return p;
}
