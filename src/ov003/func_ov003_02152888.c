#include "ffc/types.h"

extern void func_02056c4c(uint32_t v);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov003_02179e94[];
extern uint8_t data_ov003_02179eb4[];
extern uint8_t data_ov003_02179ec4[];

void *func_ov003_02152888(uint8_t *p)
{
    *(void **)p = data_ov003_02179e94;
    *(void **)(p + 0x80) = data_ov003_02179eb4;
    *(void **)(p + 0x84) = data_ov003_02179ec4;
    func_02056c4c(*(uint32_t *)(p + 0xc0));
    func_02050c28(p + 0x90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
