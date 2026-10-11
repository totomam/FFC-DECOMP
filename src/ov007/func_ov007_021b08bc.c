#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_02076258(void *p);
extern void *data_020b8e44;

void func_ov007_021b08bc(uint8_t *p)
{
    *(uint32_t *)(*(uint8_t **)(p + 0xbc)) = 0;
    func_02056c4c(p + 0x48);
    func_02076258(*(void **)data_020b8e44);
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
