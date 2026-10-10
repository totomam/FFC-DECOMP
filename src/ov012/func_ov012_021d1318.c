#include "ffc/types.h"

extern void func_ov012_021d0628(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_ov012_021d1318(func_0202041c_arg *p)
{
    func_ov012_021d0628(p->field);
}
