#include "ffc/types.h"

extern void func_02056c4c(uint32_t);
extern void func_02050c28(void *);
extern void func_02056db0(void *);
extern uint8_t data_ov003_02179e94[];
extern uint8_t data_ov003_02179eb4[];
extern uint8_t data_ov003_02179ec4[];

void *func_ov003_02152848(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint8_t **)(p + 0) = data_ov003_02179e94;
    *(uint8_t **)(p + 0x80) = data_ov003_02179eb4;
    *(uint8_t **)(p + 0x84) = data_ov003_02179ec4;
    func_02056c4c(*(uint32_t *)(p + 0xc0));
    func_02050c28(p + 0x90);
    func_02056db0(p);
    return p;
}
