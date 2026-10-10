#include "ffc/types.h"

extern void func_02056830(void *p);

typedef struct {
    uint8_t pad[0x1c];
    void *field;
} func_0202041c_arg;

void func_02057ddc(func_0202041c_arg *p)
{
    func_02056830(p->field);
}
