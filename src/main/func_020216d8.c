#include "ffc/types.h"

extern void func_020212a4(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_020216d8(func_0202041c_arg *p)
{
    func_020212a4(p->field);
}
