#include "ffc/types.h"

extern void func_02056844(uint32_t v);
extern void func_02056db0(void *p);
extern uint8_t data_ov007_021c5b9c[];

void *func_ov007_021b0c34(void *p) {
    *(uint8_t **)p = data_ov007_021c5b9c;
    func_02056844(*(uint32_t *)((uint8_t *)p + 0x8c));
    func_02056db0(p);
    return p;
}
