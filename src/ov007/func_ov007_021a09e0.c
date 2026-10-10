#include "ffc/types.h"

extern void func_ov007_021a03d0(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_ov007_021a09e0(func_0202041c_arg *p)
{
    func_ov007_021a03d0(p->field);
}
