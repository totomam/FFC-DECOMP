#include "ffc/types.h"

extern void func_02075d1c(void *p);
extern void func_02055abc(void *p);
extern char data_020b2610[];
extern char data_020b2624[];

void *func_02075c54(void *p)
{
    char *b = (char *)p;
    *(void **)b = data_020b2610;
    *(void **)(b + 0x14) = data_020b2624;
    func_02075d1c(p);
    func_02055abc(b + 0x14);
    return p;
}
