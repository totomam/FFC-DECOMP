#include "ffc/types.h"

extern void func_0206ab18(void *p);
extern void func_0206aaf0(void *p);
extern uint8_t data_ov003_02179e34[];

void *func_ov003_02153120(void *p) {
    *(uint8_t **)p = data_ov003_02179e34;
    func_0206ab18(p);
    func_0206aaf0(p);
    return p;
}
