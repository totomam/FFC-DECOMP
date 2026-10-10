#include "ffc/types.h"

extern void func_0205f3e0(void *p);

typedef struct {
    uint8_t pad[0x4c];
    void *field;
} func_0202041c_arg;

void func_02067524(func_0202041c_arg *p)
{
    func_0205f3e0(p->field);
}
