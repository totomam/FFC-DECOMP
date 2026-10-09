#include "ffc/types.h"

extern void func_02052208(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b04c8[];

void *func_020520a0(void *p) {
    *(uint8_t **)p = data_020b04c8;
    func_02052208(p);
    func_02056844(p);
    return p;
}
