#include "ffc/types.h"

extern void func_02060bf4(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_02060d7c(func_0202041c_arg *p)
{
    func_02060bf4(p->field);
}
