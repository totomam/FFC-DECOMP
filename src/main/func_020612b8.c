#include "ffc/types.h"

extern void func_02060e80(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_020612b8(func_0202041c_arg *p)
{
    func_02060e80(p->field);
}
