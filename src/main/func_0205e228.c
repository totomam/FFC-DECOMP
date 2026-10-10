#include "ffc/types.h"

extern void func_02059c20(void *p);

typedef struct {
    uint8_t pad[0x20];
    void *field;
} func_0202041c_arg;

void func_0205e228(func_0202041c_arg *p)
{
    func_02059c20(p->field);
}
