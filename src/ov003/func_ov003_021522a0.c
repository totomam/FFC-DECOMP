#include "ffc/types.h"

extern void func_02056c4c(void *a);
extern void func_02056db0(void *a);
extern void func_02056844(void *a);
extern char data_ov003_02179e64[];
extern char data_ov003_02179e84[];

void *func_ov003_021522a0(void *p)
{
    uint8_t *s = (uint8_t *)p;
    *(void **)(s + 0x00) = data_ov003_02179e64;
    *(void **)(s + 0x80) = data_ov003_02179e84;
    func_02056c4c(*(void **)(s + 0xa0));
    func_02056db0(p);
    func_02056844(p);
    return p;
}
