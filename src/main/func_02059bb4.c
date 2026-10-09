#include "ffc/types.h"

extern void func_02059c0c(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b0d94[];

void *func_02059bb4(void *p) {
    *(uint8_t **)p = data_020b0d94;
    func_02059c0c(p);
    func_02056844(p);
    return p;
}
