#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_ov001_0218e0a8(void *p);
extern void func_02056844(void *p);
extern int data_ov007_021c8074;

void *func_ov007_021bd0e4(uint8_t *p)
{
    *(void **)p = &data_ov007_021c8074;
    func_02056858(*(void **)(p + 0x1dc));
    func_ov001_0218e0a8(p);
    func_02056844(p);
    return p;
}
