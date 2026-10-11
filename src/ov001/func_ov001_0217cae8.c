#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    void *a;
    void *b;
} S;

extern void func_ov000_021653f4(void *p);

void func_ov001_0217cae8(S *p)
{
    func_ov000_021653f4(p->b);
    p->b = 0;
    func_ov000_021653f4(p->a);
    p->a = 0;
    func_ov000_021653f4(p);
}
