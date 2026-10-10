#include "ffc/types.h"

extern void func_ov007_021b68e8(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_ov007_021b6ea0(func_0202041c_arg *p)
{
    func_ov007_021b68e8(p->field);
}
