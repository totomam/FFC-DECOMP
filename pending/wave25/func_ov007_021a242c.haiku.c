#include "ffc/types.h"

extern uint32_t data_ov007_021c3c90;
extern void func_02056858(void);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov007_021a242c(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    uint32_t v;
    *(uint32_t *)obj = (uint32_t)&data_ov007_021c3c90;
    v = *(uint32_t *)(obj + 0x8c);
    if (v != 0 && v != 0) {
        func_02056858();
        *(uint32_t *)(obj + 0x8c) = 0;
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
