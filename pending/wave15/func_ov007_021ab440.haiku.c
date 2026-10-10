#include "ffc/types.h"

extern void func_02056c4c(uint32_t v);
extern void func_02076258(uint32_t v);
extern uint32_t *data_020b8e44;

void func_ov007_021ab440(uint8_t *p)
{
    func_02056c4c(*(uint32_t *)(p + 0xdc));
    func_02076258(*data_020b8e44);
}
