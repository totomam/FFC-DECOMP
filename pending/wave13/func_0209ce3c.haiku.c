#include "ffc/types.h"

extern void func_0205681c(void *p);

void func_0209ce3c(void *a)
{
    struct { uint8_t buf[0x2c]; void *p; } s;
    s.p = s.buf;
    func_0205681c(a);
}
