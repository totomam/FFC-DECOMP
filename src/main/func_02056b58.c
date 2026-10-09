#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b0b68[];

void *func_02056b58(void *p) {
    *(uint8_t **)p = data_020b0b68;
    func_02056c4c(p);
    func_02056844(p);
    return p;
}
