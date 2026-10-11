#include "ffc/types.h"

extern void func_02059538(void *a, void *b);
extern void func_02062868(void *p);
extern void func_02056844(void *p);
extern char data_ov002_021d4fd0[];

void *func_ov002_0219d074(void *p)
{
    void **w = (void **)p;
    w[0] = data_ov002_021d4fd0;
    if (w[7] != 0) {
        func_02059538(w[7], w[8]);
    }
    func_02062868(p);
    func_02056844(p);
    return p;
}
