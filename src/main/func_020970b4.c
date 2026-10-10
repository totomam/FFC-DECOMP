#include "ffc/types.h"

extern void func_02056858(void *p);

typedef struct {
    uint8_t pad[0xc];
    void *field;
} func_0202041c_arg;

void func_020970b4(func_0202041c_arg *p)
{
    func_02056858(p->field);
}
