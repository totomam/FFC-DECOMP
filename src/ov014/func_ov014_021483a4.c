#include "ffc/types.h"

extern void func_ov014_0214851c(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov014_02155acc[];

void *func_ov014_021483a4(void *p) {
    *(uint8_t **)p = data_ov014_02155acc;
    func_ov014_0214851c(p);
    func_02056844(p);
    return p;
}
