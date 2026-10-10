#include "ffc/types.h"

extern void func_ov011_021c596c(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *field;
} func_0202041c_arg;

void func_ov011_021c5d00(func_0202041c_arg *p)
{
    func_ov011_021c596c(p->field);
}
