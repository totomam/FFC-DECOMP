#include "ffc/types.h"

extern void func_ov004_02149bb8(void *p);
extern uint8_t data_ov004_02158ae4;

void *func_ov004_02149c2c(void **p) {
    func_ov004_02149bb8(p);
    *p = &data_ov004_02158ae4;
    return p;
}
