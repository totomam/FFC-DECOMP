#include "ffc/types.h"

extern void func_02024dfc(void *p);

typedef struct {
    uint8_t pad[0x34];
    void *field;
} func_0202041c_arg;

void func_0202be90(func_0202041c_arg *p)
{
    func_02024dfc(p->field);
}
