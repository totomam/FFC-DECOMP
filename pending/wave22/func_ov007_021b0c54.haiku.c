#include "ffc/types.h"

extern void func_02056844(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov007_021c5b9c[];

void *func_ov007_021b0c54(uint8_t *p) {
    *(uint8_t **)p = data_ov007_021c5b9c;
    func_02056844(*(void **)(p + 0x8c));
    func_02056db0(p);
    func_02056844(p);
    return p;
}
