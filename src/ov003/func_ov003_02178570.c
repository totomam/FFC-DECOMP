#include "ffc/types.h"

extern void func_02059bf8(void *p);

typedef struct {
    uint8_t pad[0x20];
    void *field;
} func_0202041c_arg;

void func_ov003_02178570(func_0202041c_arg *p)
{
    func_02059bf8(p->field);
}
