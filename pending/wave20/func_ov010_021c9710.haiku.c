#include "ffc/types.h"

extern char data_ov010_021d1d74[];
extern uint32_t data_0213df20[];
extern void func_0206047c(uint32_t v);
extern void FUN_021a4360(void *p);
extern void func_02056844(void *p);

void *func_ov010_021c9710(void *p)
{
    ((void **)p)[0] = data_ov010_021d1d74;
    func_0206047c(*(uint32_t *)(*(uint32_t *)data_0213df20 + 0x20));
    FUN_021a4360(p);
    func_02056844(p);
    return p;
}
