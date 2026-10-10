#include "ffc/types.h"

extern void func_02054558(void *p);
extern void func_020544e4(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov007_021c3558[];
extern uint8_t data_ov007_021c3574[];

void *func_ov007_021a09ac(void *p) {
    uint8_t *q = (uint8_t *)p;
    *(uint8_t **)q = data_ov007_021c3558;
    *(uint8_t **)(q + 0x14) = data_ov007_021c3574;
    func_02054558(q + 0x14);
    func_020544e4(q + 0x14);
    func_02056844(p);
    return p;
}
