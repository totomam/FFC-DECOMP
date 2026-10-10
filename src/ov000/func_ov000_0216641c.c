#include "ffc/types.h"

extern void func_ov000_02168738(void *p);

typedef struct {
    uint8_t pad[0x20];
    void *field;
} func_0202041c_arg;

void func_ov000_0216641c(func_0202041c_arg *p)
{
    func_ov000_02168738(p->field);
}
