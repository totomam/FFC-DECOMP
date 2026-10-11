#include "ffc/types.h"

extern char data_ov010_021d1d74[];
extern uint8_t *data_0213df20;
extern void func_0206047c(uint32_t);
extern void func_ov009_021a4360(void *);
extern void func_02056844(void *);

void *func_ov010_021c9710(void *p)
{
    *(char **)p = data_ov010_021d1d74;
    func_0206047c(*(uint32_t *)(data_0213df20 + 0x20));
    func_ov009_021a4360(p);
    func_02056844(p);
    return p;
}
