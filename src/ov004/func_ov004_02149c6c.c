#include "ffc/types.h"

extern void func_ov004_02149bb8(void *p);
extern char data_ov004_02158c44[];

void *func_ov004_02149c6c(void *a, uint32_t unused, uint8_t c)
{
    func_ov004_02149bb8(a);
    *(char **)a = data_ov004_02158c44;
    ((uint8_t *)a)[0x90] = c;
    return a;
}
