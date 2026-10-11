#include "ffc/types.h"

extern uint32_t data_02141510;
extern void func_ov000_0214b8e0(void *p);
extern void func_ov000_02147918(void *p);

void func_ov000_0214795c(void)
{
    uint8_t *obj = *(uint8_t **)((uint8_t *)&data_02141510 + 4);
    uint8_t *r4 = *(uint8_t **)(obj + 0xa4);
    if (r4 == 0) {
        return;
    }
    if (r4[9] != 0) {
        func_ov000_0214b8e0(r4);
    }
    func_ov000_02147918(r4);
}
