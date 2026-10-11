#include "ffc/types.h"

typedef struct {
    int32_t count;
    uint8_t pad[0x10];
    void *sub;
} Obj;

extern void func_ov000_021686ac(Obj *p, int32_t i);
extern void func_ov000_021653f4(void *p);

void func_ov000_02168738(Obj *p)
{
    int32_t i;
    for (i = 0; i < p->count; i++) {
        func_ov000_021686ac(p, i);
    }
    if (p->sub != 0) {
        func_ov000_021653f4(p->sub);
    }
    func_ov000_021653f4(p);
}
