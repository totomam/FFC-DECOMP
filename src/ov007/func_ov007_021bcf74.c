#include "ffc/types.h"

extern void func_02056844(void *p);
extern void func_ov001_0218e0a8(void *p);
extern int data_ov007_021c80a8;

void *func_ov007_021bcf74(uint8_t *p)
{
    *(void **)p = &data_ov007_021c80a8;
    func_02056844(*(void **)(p + 0x2e0));
    func_ov001_0218e0a8(p);
    func_02056844(p);
    return p;
}
