#include "ffc/types.h"

extern void func_02074b28(void *p);

typedef struct {
    uint8_t pad[0x40];
    void *field;
} func_0202041c_arg;

void func_02075bf4(func_0202041c_arg *p)
{
    func_02074b28(p->field);
}
