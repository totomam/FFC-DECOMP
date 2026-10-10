#include "ffc/types.h"

extern void func_02054738(void *p);
extern void func_02054844(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020b1ef4[];
extern uint8_t data_020b1f08[];

void *func_0206f1d4(void *p) {
    uint8_t *q = (uint8_t *)p;
    *(uint8_t **)q = data_020b1ef4;
    *(uint8_t **)(q + 0x14) = data_020b1f08;
    func_02054738(q + 0x14);
    func_02054844(q + 0x14);
    func_02056844(p);
    return p;
}
