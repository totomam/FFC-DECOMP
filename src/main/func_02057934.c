#include "ffc/types.h"

extern void func_0205796c(void *p);
extern void func_02054844(void *p);
extern char data_020b0ca4[];
extern char data_020b0cb8[];

void *func_02057934(void *p)
{
    char *b = (char *)p;
    *(void **)b = data_020b0ca4;
    *(void **)(b + 0x14) = data_020b0cb8;
    func_0205796c(p);
    func_02054844(b + 0x14);
    return p;
}
