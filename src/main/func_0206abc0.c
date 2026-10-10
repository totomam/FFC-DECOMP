#include "ffc/types.h"

extern void func_0206ae08(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_0206abc0(func_0202041c_arg *p)
{
    func_0206ae08(p->field);
}
