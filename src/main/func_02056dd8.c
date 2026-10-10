#include "ffc/types.h"

extern void func_02056c4c(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_02056dd8(func_0202041c_arg *p)
{
    func_02056c4c(p->field);
}
