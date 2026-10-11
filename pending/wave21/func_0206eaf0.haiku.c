#include "ffc/types.h"

extern uint32_t func_0208d5b4(void);
extern void *func_0206ea6c(void *p);
extern void func_0206e9f4(void *p);

typedef void (*VFn)(void *, uint32_t, uint32_t);

void func_0206eaf0(void *p)
{
    uint32_t v = func_0208d5b4();
    void *o = func_0206ea6c(p);
    uint32_t *vt = *(uint32_t **)o;
    ((VFn)vt[0x38 / 4])(o, v + 2, 0);
    func_0206e9f4(p);
}
