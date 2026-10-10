#include "ffc/types.h"

extern void func_ov007_021a038c(void *p);

typedef struct {
    uint8_t pad[0x1c];
    void *field;
} func_0202041c_arg;

void func_ov007_021a099c(func_0202041c_arg *p)
{
    func_ov007_021a038c(p->field);
}
