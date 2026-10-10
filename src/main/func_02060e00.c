#include "ffc/types.h"

extern void func_02060abc(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_02060e00(func_0202041c_arg *p)
{
    func_02060abc(p->field);
}
